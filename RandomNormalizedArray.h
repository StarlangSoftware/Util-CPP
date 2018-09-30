//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#ifndef UTIL_RANDOMNORMALIZEDARRAY_H
#define UTIL_RANDOMNORMALIZEDARRAY_H


class RandomNormalizedArray {
private:
    double* array;
public:
    RandomNormalizedArray(int itemCount);
    virtual ~RandomNormalizedArray();
    double* get();
};


#endif //UTIL_RANDOMNORMALIZEDARRAY_H
