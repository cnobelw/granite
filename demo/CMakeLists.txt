include_directories (${CMAKE_CURRENT_BINARY_DIR}/../lib)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CFLAGS ${DEPS_CFLAGS} ${DEPS_CFLAGS_OTHER} )
set (LIB_PATHS ${DEPS_LIBRARY_DIRS})

link_directories (${LIB_PATHS} ${CMAKE_CURRENT_BINARY_DIR}/../lib)
add_definitions (${CFLAGS})

set (EXEC_NAME ${PKG_NAME}-demo)

vala_precompile (VALA_C ${EXEC_NAME}
    GraniteDemo.vala
CUSTOM_VAPIS
    ${CMAKE_CURRENT_BINARY_DIR}/../lib/${PKG_NAME}.vapi
PACKAGES
    ${PKG_DEPS}
OPTIONS
    ${VALAC_OPTIONS}
)

add_executable (${EXEC_NAME} ${VALA_C})
target_link_libraries (${EXEC_NAME} ${PKG_NAME} ${DEPS_LIBRARIES})
install (TARGETS ${EXEC_NAME} RUNTIME DESTINATION bin)
