cmake_minimum_required(VERSION 3.5)
project(axe_game)

set(CMAKE_CXX_STANDARD 11)

# Add raylib source as a subdirectory
add_subdirectory(raylib)

# Add your game executable — match the actual path
add_executable(axe_game axe_game/axe_game.cpp)

# Link raylib to your project
target_link_libraries(axe_game raylib)
