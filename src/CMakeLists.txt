cmake_minimum_required(VERSION 3.12)
project(Util)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(Util src/Tuple.cpp src/Tuple.h src/Interval.cpp src/Interval.h src/Swap.cpp src/Swap.h src/Permutation.cpp src/Permutation.h src/Subset.cpp src/Subset.h src/SubsetFromList.cpp src/SubsetFromList.h src/RandomNormalizedArray.cpp src/RandomNormalizedArray.h)

add_executable(Test src/Tuple.cpp src/Tuple.h src/Interval.cpp src/Interval.h src/Swap.cpp src/Swap.h src/Permutation.cpp src/Permutation.h src/Subset.cpp src/Subset.h src/SubsetFromList.cpp src/SubsetFromList.h src/RandomNormalizedArray.cpp src/RandomNormalizedArray.h Test/catch.hpp Test/PermutationTest.cpp Test/SubsetTest.cpp Test/SubsetFromListTest.cpp Test/RandomNormalizedArrayTest.cpp)