# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.17)
# 项目信息
project (ACLlib_win)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable(${PROJECT_NAME} main.c acllib.c)

target_link_libraries(${PROJECT_NAME} "${PROJECT_SOURCE_DIR}/lib/libwinmm.a"
                                    "${PROJECT_SOURCE_DIR}/lib/libmsimg32.a"
                                    "${PROJECT_SOURCE_DIR}/lib/libkernel32.a"
                                    "${PROJECT_SOURCE_DIR}/lib/libuser32.a"
                                    "${PROJECT_SOURCE_DIR}/lib/libgdi32.a"
                                    "${PROJECT_SOURCE_DIR}/lib/libole32.a"
                                    "${PROJECT_SOURCE_DIR}/lib/liboleaut32.a"
                                    "${PROJECT_SOURCE_DIR}/lib/libuuid.a")

