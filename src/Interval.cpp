//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#include "Interval.h"

/**
 * The add method adds a new Tuple with given inputs to the list.
 *
 * @param start first element of Tuple.
 * @param end   second element of Tuple.
 */
void Interval::add(int start, int end) {
    list.emplace_back(start, end);
}

/**
 * The getFirst method returns the first element at the list vector's given index.
 *
 * @param index to use at getting tuple from vector.
 * @return the first element at the list vector's given index.
 */
int Interval::getFirst(unsigned long index) const{
    return list.at(index).getFirst();
}

/**
 * The getLast method returns the last element at the list vector's given index.
 *
 * @param index to use at getting tuple from vector.
 * @return the last element at the list vector's given index.
 */
int Interval::getLast(unsigned long index) const{
    return list.at(index).getLast();
}

/**
 * The size method returns the size of the list vector.
 *
 * @return size of the list vector.
 */
unsigned long Interval::size() const{
    return list.size();
}
