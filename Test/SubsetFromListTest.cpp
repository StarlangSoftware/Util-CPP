//
// Created by Olcay Taner YILDIZ on 18.12.2020.
//

#include "catch.hpp"
#include "../SubsetFromList.h"

TEST_CASE("SubsetFromList-next1") {
    int* firstSubSet;
    int count;
    auto* subSet = new SubsetFromList(new int[]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, 10, 5);
    firstSubSet = subSet->get();
    REQUIRE(firstSubSet[0] == 10);
    REQUIRE(firstSubSet[1] == 20);
    REQUIRE(firstSubSet[2] == 30);
    REQUIRE(firstSubSet[3] == 40);
    REQUIRE(firstSubSet[4] == 50);
    count = 1;
    while (subSet->next()){
        count++;
    }
    REQUIRE(252 == count);
}

TEST_CASE("SubsetFromList-next2") {
    int* firstSubSet;
    int count;
    auto* subSet = new SubsetFromList(new int[]{9, 8, 2, 12, 7, 16, 17}, 7, 3);
    firstSubSet = subSet->get();
    REQUIRE(firstSubSet[0] == 9);
    REQUIRE(firstSubSet[1] == 8);
    REQUIRE(firstSubSet[2] == 2);
    count = 1;
    while (subSet->next()){
        count++;
    }
    REQUIRE(35 == count);
}

TEST_CASE("SubsetFromList-next3") {
    int count = 0;
    SubsetFromList* subSet;
    for (int i = 0; i <= 9; i++){
        subSet = new SubsetFromList(new int[]{9, 8, 2, 12, 7, 16, 17, 8, 3}, 9, i);
        count++;
        while (subSet->next()){
            count++;
        }
    }
    REQUIRE(512 == count);
}
