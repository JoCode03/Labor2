cmake_minimum_required(VERSION 3.30)
project(Labor2)

set(CMAKE_CXX_STANDARD 20)

add_library(dishlib STATIC
        dishlib/AbstractDish.cpp
        dishlib/PizzaMargherita.cpp
        dishlib/PizzaMargherita.h
        dishlib/VegetableSoup.cpp
        dishlib/VegetableSoup.h
        dishlib/DishFactory.cpp
        dishlib/DishFactory.h
)

target_include_directories(dishlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/dishlib)

add_executable(Labor2 main.cpp)

target_include_directories(Labor2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/dishlib)

target_link_libraries(Labor2 PRIVATE dishlib)