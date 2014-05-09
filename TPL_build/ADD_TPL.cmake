# Macro to create a distclean target
MACRO( ADD_DISTCLEAN )
    SET( DISTCLEAN_CMDS )
    FOREACH( tmp ${TPL_LIST} )
        STRING(TOLOWER ${tmp} tmp2)
        SET( DISTCLEAN_CMDS ${DISTCLEAN_CMDS} COMMAND ${CMAKE_COMMAND} -E remove_directory ${tmp}-prefix )
        SET( DISTCLEAN_CMDS ${DISTCLEAN_CMDS} COMMAND ${CMAKE_COMMAND} -E remove_directory "${CMAKE_INSTALL_PREFIX}/${tmp2}" )
    ENDFOREACH()
    ADD_CUSTOM_TARGET(
        distclean
        ${CMAKE_COMMAND} -E remove_directory "${CMAKE_INSTALL_PREFIX}/logs"
        COMMAND ${CMAKE_COMMAND} -E remove "${CMAKE_INSTALL_PREFIX}/TPLs.cmake"
        COMMAND ${CMAKE_COMMAND} -E remove_directory CMakeFiles
        COMMAND ${CMAKE_COMMAND} -E remove CMakeCache.txt cmake_install.cmake  Makefile
        ${DISTCLEAN_CMDS}
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}" 
    )
ENDMACRO()


# Macro to create a TPL-clean target
MACRO( ADD_TPL_CLEAN TPL )
    SET( tpl_cmds ${TPL}-build ${TPL}-pre-configure ${TPL}-configure ${TPL}-done 
        ${TPL}-download ${TPL}-download-impl ${TPL}-mkdir ${TPL}-patch ${TPL}-install 
        ${TPL}-build-test ${TPL}-test ${TPL}-check-test ${TPL}-update ${TPL}-post-install )
    SET( RM_LIST )
    FOREACH( tmp ${tpl_cmds} )
        SET( RM_LIST ${RM_LIST} ${tmp} ${tmp}-err.log ${tmp}-out.log )
    ENDFOREACH()
    ADD_CUSTOM_TARGET(
        ${TPL}-clean
        ${CMAKE_COMMAND}         -E remove_directory ../${TPL}-build
        COMMAND ${CMAKE_COMMAND} -E make_directory   ../${TPL}-build
        COMMAND ${CMAKE_COMMAND} -E remove ${RM_LIST}
        COMMAND ${CMAKE_COMMAND} -E remove_directory "${${TPL}_INSTALL_DIR}"
        COMMAND ${CMAKE_COMMAND} -E make_directory   "${${TPL}_INSTALL_DIR}"
        COMMAND ${CMAKE_COMMAND} -E remove_directory "${CMAKE_INSTALL_PREFIX}/logs/${TPL}"
        COMMAND ${CMAKE_COMMAND} -E make_directory   "${CMAKE_INSTALL_PREFIX}/logs/${TPL}"
        COMMAND ${CMAKE_COMMAND} -E remove_directory ${TPL}-prefix
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/${TPL}-prefix/src/${TPL}-stamp" 
    )
ENDMACRO()


# Macro to create an empty TPL target
MACRO( ADD_TPL_EMPTY TPL )
    FILE( MAKE_DIRECTORY "${${TPL}_INSTALL_DIR}" )
    FILE( MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/logs/${TPL}" )
    STRING(TOLOWER ${TPL} TPL2)
    EXTERNALPROJECT_ADD(
        ${TPL}
        SOURCE_DIR          "${${TPL}_INSTALL_DIR}"
        CONFIGURE_COMMAND   ""
        INSTALL_COMMAND     ${CMAKE_COMMAND} -E echo "   Using preinstalled ${TPL2}: ${${TPL}_INSTALL_DIR}"
        BUILD_COMMAND       ""
    )
ENDMACRO()


# Macro to create a step to save the log files
MACRO( ADD_TPL_SAVE_LOGS TPL )
    FILE( MAKE_DIRECTORY "${${TPL}_INSTALL_DIR}" )
    FILE( MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/logs/${TPL}" )
    SET( tpl_cmds ${TPL}-build ${TPL}-pre-configure ${TPL}-configure ${TPL}-done 
        ${TPL}-download ${TPL}-download-impl ${TPL}-mkdir ${TPL}-patch ${TPL}-install 
        ${TPL}-build-test ${TPL}-test ${TPL}-check-test ${TPL}-update ${TPL}-post-install )
    SET( RM_LIST )
    FOREACH( tmp ${tpl_cmds} )
        SET( RM_LIST ${RM_LIST} ${tmp} ${tmp}.cmake )
    ENDFOREACH()
    EXTERNALPROJECT_ADD_STEP(
        ${TPL}
        post-install
        COMMAND             ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_BINARY_DIR}/${TPL}-prefix/src/${TPL}-stamp" .
        COMMAND             ${CMAKE_COMMAND} -E remove ${RM_LIST}  ${TPL}-urlinfo.txt
        COMMAND             ${CMAKE_COMMAND} -E remove_directory ${TPL}-prefix
        COMMENT             ""
        DEPENDEES           install
        WORKING_DIRECTORY   "${CMAKE_INSTALL_PREFIX}/logs/${TPL}"
        LOG                 0
    )
ENDMACRO()


# Macro to write a message and record it in TPLs.cmake
MACRO( MESSAGE_TPL MSG )
    MESSAGE( "${MSG}" )
    FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "# ${MSG}\n" )
ENDMACRO() 



