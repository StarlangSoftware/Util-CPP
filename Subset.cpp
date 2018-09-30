//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#include <cstdlib>
#include "Subset.h"

/**
 * The constructor of {@link Subset} class which takes 3 integer inputs; rangeStart, rangeEnd, and elementCount.
 * It initializes variables rangeEnd and elementCount with given inputs, creates 2 arrays; set and multiset with the
 * size of given elementCount and multisetCount, which is derived from elementCount, respectively. Then, it assigns
 * rangeStart+i to each ith element of set array.
 *
 * @param rangeStart   integer input defining start range.
 * @param rangeEnd     integer input defining ending range.
 * @param elementCount integer input element count.
 */
Subset::Subset(int rangeStart, int rangeEnd, int elementCount) {
    int i, multisetCount;
    this->rangeEnd = rangeEnd;
    this->elementCount = elementCount;
    multisetCount = ((elementCount + 2) * (elementCount + 1)) / 2;
    set = new int[elementCount];
    multiset = new int[multisetCount];
    for (i = 0; i < elementCount; i++)
        set[i] = rangeStart + i;
}

Subset::~Subset() {
    delete set;
    delete multiset;
}

/**
 * An empty constructor of {@link Subset} class.
 */
Subset::Subset() {
}

/**
 * Getter for the set array.
 *
 * @return the set array.
 */
int *Subset::get() {
    return set;
}

/**
 * The getX method takes an integer M as an input. Creates a new array X size of elementCount+2 and assigns 0 to its
 * first element. Starting from the second index, it assigns set array's elements to newly
 * created array X. Then, assigns M to the last element of X.
 *
 * @param M integer input.
 * @return Array size of elementCount+2.
 */
int *Subset::getX(int M) {
    int* X;
    int i;
    X = new int[elementCount + 2];
    X[0] = 0;
    for (i = 0; i < elementCount; i++) {
        X[i + 1] = set[i];
    }
    X[elementCount + 1] = M;
    return X;
}

/**
 * Getter for the multiset array.
 *
 * @return the multiset array.
 */
int *Subset::getmultiset() {
    return multiset;
}

int compare(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

/**
 * The multiset method takes an integer M as an input. Assigns ith element of set array to even numbered
 * indices of multiset array and M - ith element of set array to odd numbered
 * indices of multiset array, and i is between 0 and elementCount. Then, assigns M to jth index of multiset
 * array. At the end, fill up the rest of the multiset array via different
 * indices of set array and sort the multiset array.
 *
 * @param M integer input.
 */
void Subset::multiSet(int M) {
    int i, j, k;
    j = 0;
    for (i = 0; i < elementCount; i++) {
        multiset[j] = set[i];
        j++;
        multiset[j] = M - set[i];
        j++;
    }
    multiset[j] = M;
    j++;
    for (i = elementCount - 1; i > 0; i--)
        for (k = i - 1; k >= 0; k--) {
            multiset[j] = set[i] - set[k];
            j++;
        }
    qsort(multiset, M, sizeof(int), compare);
}

/**
 * The next method generates the next subset.
 *
 * @return true if next subset generation is possible, false otherwise.
 */
bool Subset::next() {
    int i, j;
    for (i = elementCount - 1; i > -1; i--) {
        set[i]++;
        if (set[i] <= rangeEnd - elementCount + i + 1)
            break;
    }
    if (i == -1)
        return false;
    for (j = i + 1; j < elementCount; j++)
        set[j] = set[j - 1] + 1;
    return true;
}
