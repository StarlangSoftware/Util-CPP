//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#include "SubsetFromList.h"

/**
 * A constructor of {@link SubsetFromList} class takes an integer list and an integer elementCount as inputs. It initializes
 * elementList and elementCount variables with given inputs, then creates 3 arrays; set, indexList, and multiset with the
 * size of given elementCount and multisetCount, which is derived from elementCount, respectively. Then, it assigns
 * i to each ith element of indexList array and use this index to point at elementList and
 * assigns to set array.
 *
 * @param list         array type input.
 * @param elementCount integer input element count.
 */
SubsetFromList::SubsetFromList(int *list, int listSize, int elementCount) {
    int i;
    this->elementList = list;
    this->elementCount = elementCount;
    this->listSize = listSize;
    set = new int[elementCount];
    indexList = new int[elementCount];
    for (i = 0; i < elementCount; i++) {
        indexList[i] = i;
        set[i] = elementList[indexList[i]];
    }
}

SubsetFromList::~SubsetFromList() {
    delete indexList;
}

/**
 * The next method generates the next subset from list.
 *
 * @return true if next subset generation from list is possible, false otherwise.
 */
bool SubsetFromList::next() {
    int i, j;
    for (i = elementCount - 1; i > -1; i--) {
        indexList[i]++;
        if (indexList[i] < listSize - elementCount + i + 1)
            break;
    }
    if (i == -1)
        return false;
    set[i] = elementList[indexList[i]];
    for (j = i + 1; j < elementCount; j++) {
        indexList[j] = indexList[j - 1] + 1;
        set[j] = elementList[indexList[j]];
    }
    return true;
}
