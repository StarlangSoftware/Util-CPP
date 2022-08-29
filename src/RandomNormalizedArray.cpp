//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#include <random>
#include "RandomNormalizedArray.h"

using namespace std;
/**
 * The constructor of {@link RandomNormalizedArray} class gets an integer itemCount as an input. Creates an array of
 * size itemCount and loops through each element of the array and initializes them with a random number by using rand.
 * Then, accumulates each element of the array and at the end divides each element with the resulting sum.
 *
 * @param itemCount integer input defining array size.
 */
RandomNormalizedArray::RandomNormalizedArray(int itemCount) {
    int i;
    double sum = 0.0;
    array = new double[itemCount];
    uniform_real_distribution<> distribution(0.0, 1.0);
    default_random_engine randomEngine = default_random_engine (1);
    for (i = 0; i < itemCount; i++) {
        array[i] = distribution(randomEngine);
        sum += array[i];
    }
    for (i = 0; i < itemCount; i++) {
        array[i] /= sum;
    }
}

RandomNormalizedArray::~RandomNormalizedArray() {
    delete array;
}

/**
 * Getter for the double array.
 *
 * @return the double array.
 */
double *RandomNormalizedArray::get() {
    return array;
}
