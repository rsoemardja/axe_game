cmake_minimum_required(VERSION 3.5)

project(MyRaylibProject)

set(CMAKE_CXX_STANDARD 11)

# Add the executable from your source file(s)
add_executable(MyRaylibProject Source\main.cpp)

# Specify where to find raylib
set(RAYLIB_PATH "C:/raylib")

# Include raylib headers
target_include_directories(MyRaylibProject PRIVATE "${RAYLIB_PATH}/include")

# Link raylib library
target_link_libraries(MyRaylibProject "${RAYLIB_PATH}/lib/raylib.lib")

# Link Windows system libs needed by raylib
target_link_libraries(MyRaylibProject winmm.lib kernel32.lib gdi32.lib opengl32.lib)
