//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#include "Permutation.h"
#include "Swap.h"

/**
 * A constructor of Permutation class which creates a new array and assigns integer
 * numbers starting from 0 to given input n.
 *
 * @param n integer input.
 */
Permutation::Permutation(int n) {
    int i;
    this->n = n;
    a = new int[n];
    for (i = 0; i < n; i++) {
        a[i] = i;
    }
}

Permutation::~Permutation() {
    delete a;
}

/**
 * The get method returns the array a.
 *
 * @return Array a.
 */
int* Permutation::get() const{
    return a;
}

/**
 * The next method generates next permutation for the array a.
 *
 * @return true if next permutation is possible, false otherwise.
 */
bool Permutation::next() {
    int i = n - 2;
    int j, k;
    while (i >= 0 && a[i] >= a[i + 1]) {
        i--;
    }
    if (i == -1) {
        return false;
    }
    j = n - 1;
    while (a[i] >= a[j]) {
        j--;
    }
    Swap::swap(a, i, j);
    k = i + 1;
    j = n - 1;
    while (k < j) {
        Swap::swap(a, j, k);
        k++;
        j--;
    }
    return true;
}
