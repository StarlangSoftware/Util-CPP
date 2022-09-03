//
// Created by Olcay Taner YILDIZ on 18.12.2020.
//

#include "catch.hpp"
#include "../src/RandomArray.h"

TEST_CASE("normalizedArrayTest") {
    double* array;
    array = RandomArray::normalizedArray(10);
    double sum = 0.0;
    for (int i = 0; i < 10; i++){
        sum += array[i];
    }
    REQUIRE(1.0 == sum);
}

TEST_CASE("indexArrayTest") {
    vector<int> array;
    array = RandomArray::indexArray(10, 0);
    int sum = 0;
    for (int i = 0; i < 10; i++){
        sum += array[i];
    }
    REQUIRE(45 == sum);
}
