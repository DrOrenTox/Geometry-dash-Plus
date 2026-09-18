cmake_minimum_required(VERSION 3.22)

project(geometry-dash-plus)

find_package(geode REQUIRED)

add_geode_mod(
    ID drorentox.geometry_dash_plus
    SOURCES src/main.cpp
)

