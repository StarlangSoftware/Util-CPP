//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#ifndef UTIL_INTERVAL_H
#define UTIL_INTERVAL_H

#include <vector>
#include "Tuple.h"
using namespace std;

class Interval {
private:
    vector<Tuple> list;
public:
    Interval() = default;
    void add(int start, int end);
    int getFirst(unsigned long index) const;
    int getLast(unsigned long index) const;
    unsigned long size() const;
};


#endif //UTIL_INTERVAL_H
