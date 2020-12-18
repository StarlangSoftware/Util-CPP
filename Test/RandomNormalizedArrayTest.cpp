//
// Created by Olcay Taner YILDIZ on 18.12.2020.
//

#include "catch.hpp"
#include "../RandomNormalizedArray.h"

TEST_CASE("RandomNormalizedArray-get") {
    double* array;
    auto* randomNormalizedArray = new RandomNormalizedArray(10);
    array = randomNormalizedArray->get();
    double sum = 0.0;
    for (int i = 0; i < 10; i++){
        sum += array[i];
    }
    REQUIRE(1.0 == sum);
}
