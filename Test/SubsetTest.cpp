//
// Created by Olcay Taner YILDIZ on 18.12.2020.
//

#include "catch.hpp"
#include "../Subset.h"

TEST_CASE("Subset-next1") {
    int* firstSubSet;
    int count;
    auto* subSet = new Subset(1, 10, 5);
    firstSubSet = subSet->get();
    REQUIRE(firstSubSet[0] == 1);
    REQUIRE(firstSubSet[1] == 2);
    REQUIRE(firstSubSet[2] == 3);
    REQUIRE(firstSubSet[3] == 4);
    REQUIRE(firstSubSet[4] == 5);
    count = 1;
    while (subSet->next()){
        count++;
    }
    REQUIRE(252 == count);
}

TEST_CASE("Subset-next2") {
    int* firstSubSet;
    int count;
    auto* subSet = new Subset(1, 20, 3);
    firstSubSet = subSet->get();
    REQUIRE(firstSubSet[0] == 1);
    REQUIRE(firstSubSet[1] == 2);
    REQUIRE(firstSubSet[2] == 3);
    count = 1;
    while (subSet->next()){
        count++;
    }
    REQUIRE(count == 1140);
}

TEST_CASE("Subset-next3") {
    int count = 0;
    Subset* subSet;
    for (int i = 0; i <= 10; i++){
        subSet = new Subset(1, 10, i);
        count++;
        while (subSet->next()){
            count++;
        }
    }
    REQUIRE(1024 == count);
}
