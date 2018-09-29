cmake_minimum_required(VERSION 3.12)
project(Util)

set(CMAKE_CXX_STANDARD 17)

add_library(Util Tuple.cpp Tuple.h Interval.cpp Interval.h)