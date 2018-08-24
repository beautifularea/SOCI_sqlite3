project(t)

# Minium cmake requirement
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

set (TARGET_NAME t)

aux_source_directory(. DIR_SRCS)
add_executable(${TARGET_NAME} ${DIR_SRCS})

target_link_libraries(${TARGET_NAME} libsoci_core.a)
target_link_libraries(${TARGET_NAME} libsoci_mysql.a)
target_link_libraries(${TARGET_NAME} libsoci_sqlite3.a)
target_link_libraries(${TARGET_NAME} libmysqlclient.a)
target_link_libraries(${TARGET_NAME} libsqlite3.a)
target_link_libraries(${TARGET_NAME} librocksdb.a)

target_link_libraries(${TARGET_NAME} -lz)
target_link_libraries(${TARGET_NAME} -lpthread)
target_link_libraries(${TARGET_NAME} -lrt)
target_link_libraries(${TARGET_NAME} -lcrypto)
target_link_libraries(${TARGET_NAME} -ldl)
