SET(TARGET_NAME SM_SOCKET)
SET(SHARE_TARGET_NAME ${TARGET_NAME})


SET(PATH_TO_REVISION_IN ${CMAKE_CURRENT_SOURCE_DIR}/revision.c.in CACHE INTERNAL  "" FORCE)

configure_version(${TARGET_NAME} ${CMAKE_CURRENT_SOURCE_DIR} 0 3)

add_definitions(-DNO_SHARE_TEST)
		
file(GLOB_RECURSE TARGET_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
list (APPEND TARGET_SRC    ${CMAKE_CURRENT_SOURCE_DIR}/revision.c)		

file (GLOB CORE_HEADER_FILES ../include/*.h ../include/*.hpp)
list (APPEND CORE_HEADER_FILES    ${CMAKE_CURRENT_SOURCE_DIR}/../include/deftype)


file (GLOB SOCKET_HEADER_FILES ../include/Socket/*.h ../include/Socket/*.hpp)
file (GLOB UTYPE_HEADER_FILES ../include/UType/*.h ../include/UType/*.hpp)

set (SHARE_HEADERS ${CORE_HEADER_FILES} ${SOCKET_HEADER_FILES} ${UTYPE_HEADER_FILES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include 
					${Boost_INCLUDE_DIRS} 
					${RAPIDJSON_INCLUDES} 
					)	

share_add_library(${TARGET_NAME} FALSE TARGET_SRC SHARE_HEADERS TRUE)

IF (WIN32)
	set (PLATFORM_LIBS ${PLATFORM_LIBS} ole32 oleaut32 CACHE STRING     "PLATFORM_LIBS" FORCE)
ELSEIF (UNIX)
	IF(QNX)
		SET(PLATFORM_LIBS socket m ${PLATFORM_LIBS} CACHE STRING     "PLATFORM_LIBS" FORCE)
	ELSE()
		SET(PLATFORM_LIBS  pthread dl rt ${PLATFORM_LIBS} CACHE STRING     "PLATFORM_LIBS" FORCE)
	ENDIF()
ENDIF()
set(_PLATFORM_LIBS ${PLATFORM_LIBS})
list(REMOVE_DUPLICATES _PLATFORM_LIBS)

SET(PLATFORM_LIBS ${_PLATFORM_LIBS}  CACHE STRING "Platform library" FORCE)

share_target_link_libraries(${TARGET_NAME} ${PLATFORM_LIBS})

install(FILES ${CORE_HEADER_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
install(FILES ${SOCKET_HEADER_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/Socket)
install(FILES ${UTYPE_HEADER_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/UType)


SET(SHARE_LIBRARIES  ${TARGET_NAME} CACHE STRING "SHARE_LIBRARIES" FORCE)#fixme must be filepath

set(SHARE_FOUND TRUE CACHE BOOL  "SHARE_FOUND" FORCE)	
		
