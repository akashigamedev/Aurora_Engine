cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(aurora_engine VERSION 1.0)

set(DEPS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/deps")

# add all file inclusions here
file(GLOB_RECURSE AURORA_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE GLAD_SRC ${DEPS_DIR}/glad/src/glad.c)

find_package(OpenGL REQUIRED)
add_subdirectory(${DEPS_DIR}/glfw)

add_executable(aurora_engine
  ${AURORA_SRC}
  ${GLAD_SRC}
)

target_link_libraries(aurora_engine OpenGL::GL glfw)

# add all include directories here
target_include_directories(aurora_engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(aurora_engine PUBLIC ${DEPS_DIR}/glad/include)

