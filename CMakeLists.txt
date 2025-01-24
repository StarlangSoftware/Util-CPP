cmake_minimum_required(VERSION 3.12)
project(Util)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-O3")

add_library(Util src/Tuple.cpp src/Tuple.h src/Interval.cpp src/Interval.h src/Swap.cpp src/Swap.h src/Permutation.cpp src/Permutation.h src/Subset.cpp src/Subset.h src/SubsetFromList.cpp src/SubsetFromList.h src/RandomArray.cpp src/RandomArray.h
        src/StringUtils.cpp
        src/StringUtils.h)
add_executable(Test src/Tuple.cpp src/Tuple.h src/Interval.cpp src/Interval.h src/Swap.cpp src/Swap.h src/Permutation.cpp src/Permutation.h src/Subset.cpp src/Subset.h src/SubsetFromList.cpp src/SubsetFromList.h src/RandomArray.cpp src/RandomArray.h Test/catch.hpp Test/PermutationTest.cpp Test/SubsetTest.cpp Test/SubsetFromListTest.cpp Test/RandomNormalizedArrayTest.cpp
        src/StringUtils.cpp
        src/StringUtils.h)