/*------------------------------------------------------------------------
 * mat3d_3across.c -- 3d curvilinear test case with up to 3 materials/zone
 *                    
 *
 * Programmer:  Jeremy Meredith,  March 28, 2000
 *
 *  This test case creates a 3x3x3 curvilinear mesh.  The 9 leftmost zones
 *  contain material 1.  The 9 rightmost zones contain material 3.  The 9
 *  central zones contain materials 1,2,3 in a 20/60/20 split.
 *
 *  This should (ideally) produce a strip of material 2 down the center 
 *  of the mesh.
 *
 *
 * Modifications:
 *
 *-----------------------------------------------------------------------*/
#include <stdlib.h>
#include <string.h>
#include "silo.h"

#define zx 3
#define zy 3
#define zz 3

#define nx 4
#define ny 4
#define nz 4

float x[nx*ny*nz]={-1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,
                   -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,
                   -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,
                   -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2,  -1, 0, 1, 2};
float y[nx*ny*nz]={-1,-1,-1,-1,   0, 0, 0, 0,   1, 1, 1, 1,   2, 2, 2, 2,
                   -1,-1,-1,-1,   0, 0, 0, 0,   1, 1, 1, 1,   2, 2, 2, 2,
                   -1,-1,-1,-1,   0, 0, 0, 0,   1, 1, 1, 1,   2, 2, 2, 2,
                   -1,-1,-1,-1,   0, 0, 0, 0,   1, 1, 1, 1,   2, 2, 2, 2};
float z[nx*ny*nz]={-1,-1,-1,-1,  -1,-1,-1,-1,  -1,-1,-1,-1,  -1,-1,-1,-1, 
                    0, 0, 0, 0,   0, 0, 0, 0,   0, 0, 0, 0,   0, 0, 0, 0,
                    1, 1, 1, 1,   1, 1, 1, 1,   1, 1, 1, 1,   1, 1, 1, 1,
                    2, 2, 2, 2,   2, 2, 2, 2,   2, 2, 2, 2,   2, 2, 2, 2};

int nmat=3;
int matnos[] = {1,2,3};

int     matlist[nx*ny*nz] = { 1,-1,3,  1,-4,3,  1,-7,3,
                              1,-10,3, 1,-13,3, 1,-16,3,
                              1,-19,3, 1,-22,3, 1,-25,3 };
int     mix_mat [100]     = { 1,2,3,   1,2,3,  1,2,3, 
                              1,2,3,   1,2,3,  1,2,3,
                              1,2,3,   1,2,3,  1,2,3  };
int     mix_next[100]     = { 2,3,0,   5,6,0,  8,9,0,
                              11,12,0, 14,15,0, 17,18,0,
                              20,21,0, 23,24,0, 26,27,0 };
#define M1 .2
#define M2 .6
#define M3 .2

float   mix_vf  [100]     = { M1,M2,M3, M1,M2,M3, M1,M2,M3,
                              M1,M2,M3, M1,M2,M3, M1,M2,M3,
                              M1,M2,M3, M1,M2,M3, M1,M2,M3 };

int     mix_zone[100]     = {  2, 2, 2,  5, 5, 5,  8, 8, 8,
                              11,11,11, 14,14,14, 17,17,17,
                              20,20,20, 23,23,23, 26,26,26 };
int     mixlen = 27;

int     dims[3];

#define ALLOC_N(t,n) (t*)(calloc(n, sizeof(n)));

/*--------------------*/
/*    Main Program    */
/*--------------------*/
int main(int argc, char **argv) {
    DBfile *db;
    int            i, driver = DB_PDB;
    char          *filename = "csg.pdb";
    char  *coordnames[3];
    float *coord[3];

    for (i=1; i<argc; i++) {
        if (!strcmp(argv[i], "DB_PDB")) {
            driver = DB_PDB;
            filename = "mat3d_3across.pdb";
        } else if (!strcmp(argv[i], "DB_HDF5")) {
            driver = DB_HDF5;
            filename = "mat3d_3across.h5";
        } else {
            fprintf(stderr, "%s: ignored argument `%s'\n", argv[0], argv[i]);
        }
    }

  coordnames[0]=strdup("x");
  coordnames[1]=strdup("y");
  coordnames[2]=strdup("z");

  coord[0] = x;
  coord[1] = y;
  coord[2] = z;

  dims[0]=nx;
  dims[1]=ny;
  dims[2]=nz;

  db=DBCreate(filename, DB_CLOBBER, DB_LOCAL,
              "Mixed zone 3d test", driver);

  DBPutQuadmesh(db, "mesh", coordnames, coord, dims, 3, 
                DB_FLOAT, DB_NONCOLLINEAR, NULL);

  dims[0]=zx;
  dims[1]=zy;
  dims[2]=zz;

  DBPutMaterial(db, "material", "mesh", nmat, matnos, matlist, dims, 3, 
		mix_next, mix_mat, mix_zone, mix_vf, mixlen, DB_FLOAT, NULL);

  DBClose(db);

  return 0;
}
