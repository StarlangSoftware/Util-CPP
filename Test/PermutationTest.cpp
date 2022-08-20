//
// Created by Olcay Taner YILDIZ on 18.12.2020.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/Permutation.h"

TEST_CASE("Permutation-next1") {
    int* firstPermutation;
    int count;
    auto* permutation = new Permutation(3);
    firstPermutation = permutation->get();
    REQUIRE(firstPermutation[0] == 0);
    REQUIRE(firstPermutation[1] == 1);
    REQUIRE(firstPermutation[2] == 2);
    count = 1;
    while (permutation->next()){
        count++;
    }
    REQUIRE(count == 6);
}

TEST_CASE("Permutation-next2") {
    int* firstPermutation;
    int count;
    auto* permutation = new Permutation(5);
    firstPermutation = permutation->get();
    REQUIRE(firstPermutation[0] == 0);
    REQUIRE(firstPermutation[1] == 1);
    REQUIRE(firstPermutation[2] == 2);
    REQUIRE(firstPermutation[3] == 3);
    REQUIRE(firstPermutation[4] == 4);
    count = 1;
    while (permutation->next()){
        count++;
    }
    REQUIRE(count == 120);
}