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
    set = new int[elementCount];
    for (i = 0; i < elementCount; i++)
        set[i] = rangeStart + i;
}

Subset::~Subset() {
    delete set;
}

/**
 * An empty constructor of {@link Subset} class.
 */
Subset::Subset() = default;

/**
 * Getter for the set array.
 *
 * @return the set array.
 */
int *Subset::get() {
    return set;
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
