cmake_minimum_required(VERSION 3.12)
project(Util)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-O3")

add_library(Util Tuple.cpp Tuple.h Interval.cpp Interval.h Swap.cpp Swap.h Permutation.cpp Permutation.h Subset.cpp Subset.h SubsetFromList.cpp SubsetFromList.h RandomArray.cpp RandomArray.h StringUtils.cpp StringUtils.h)
