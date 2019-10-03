cmake_minimum_required(VERSION 3.6)
project(ft_ssl_md5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.c md5/md5.h md5/md5.c crypto_header.h options.c md5/constant.c md5/state.c md5/internal.h md5/data.c md5/md5_cypher.c)

add_executable(ft_ssl_md5 ${SOURCE_FILES})

target_link_libraries(ft_ssl_md5 ${CMAKE_SOURCE_DIR}/libft/libft.a)