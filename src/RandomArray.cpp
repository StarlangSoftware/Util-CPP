//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#include <random>
#include "RandomArray.h"

using namespace std;
/**
 * The constructor of RandomNormalizedArray class gets an integer itemCount as an input. Creates an array of
 * size itemCount and loops through each element of the array and initializes them with a random number by using rand.
 * Then, accumulates each element of the array and at the end divides each element with the resulting sum.
 *
 * @param itemCount integer input defining array size.
 */
double* RandomArray::normalizedArray(int itemCount) {
    int i;
    double sum = 0.0;
    auto* array = new double[itemCount];
    uniform_real_distribution<> distribution(0.0, 1.0);
    auto randomEngine = default_random_engine (time(0));
    for (i = 0; i < itemCount; i++) {
        array[i] = distribution(randomEngine);
        sum += array[i];
    }
    for (i = 0; i < itemCount; i++) {
        array[i] /= sum;
    }
    return array;
}

vector<int> RandomArray::indexArray(int itemCount, int seed) {
    vector<int> randomArray;
    randomArray.reserve(itemCount);
    for (int i = 0; i < itemCount; i++){
        randomArray.push_back(i);
    }
    std::shuffle(randomArray.begin(), randomArray.end(), default_random_engine(seed));
    return randomArray;
}
