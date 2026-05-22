cmake_minimum_required(VERSION 4.1)
project(SpeedFarmer)

set(CMAKE_CXX_STANDARD 20)

add_executable(SpeedFarmer main.cpp
        Player.cpp
        Player.h
        Game.cpp
        Game.h
        Wagen.cpp
        Wagen.h
        Oogst.cpp
        Oogst.h
        Inventory.cpp
        Inventory.h)

include(FetchContent)

FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG        5.5
)

FetchContent_MakeAvailable(raylib)

target_link_libraries(SpeedFarmer raylib)