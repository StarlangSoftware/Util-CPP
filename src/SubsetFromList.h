//
// Created by Olcay Taner Yıldız on 30.09.2018.
//

#ifndef UTIL_SUBSETFROMLIST_H
#define UTIL_SUBSETFROMLIST_H


#include "Subset.h"

class SubsetFromList : public Subset{
private:
    int* elementList;
    int* indexList;
    int listSize;
public:
    SubsetFromList(int* list, int listSize, int elementCount);
    virtual ~SubsetFromList();
    bool next();
};


#endif //UTIL_SUBSETFROMLIST_H
