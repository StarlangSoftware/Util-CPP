//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#ifndef UTIL_RANDOMARRAY_H
#define UTIL_RANDOMARRAY_H

#include<vector>

using namespace std;

class RandomArray {
public:
    static double* normalizedArray(int itemCount);
    static vector<int> indexArray(int itemCount, int seed);
};


#endif //UTIL_RANDOMARRAY_H
