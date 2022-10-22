//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#ifndef UTIL_PERMUTATION_H
#define UTIL_PERMUTATION_H


class Permutation {
private:
    int n;
    int* a;
public:
    explicit Permutation(int n);
    int* get();
    virtual ~Permutation();
    bool next();
};


#endif //UTIL_PERMUTATION_H
