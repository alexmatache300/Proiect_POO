cmake_minimum_required(VERSION 3.0)

# cmake_minimum_required(VERSION <specify CMake version here>)

project(Proiect_POO)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(Proiect_POO
        main.cpp Data.cpp Exercitiu_picioare.cpp Exceptii.cpp Exercitiu.cpp Exercitiu_brate.cpp Exercitiu_piept.cpp Exercitiu_spate.cpp Exercitiu_umeri.cpp Mancare.cpp Program.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        )

