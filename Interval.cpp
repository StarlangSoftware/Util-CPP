//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#include "Interval.h"

/**
 * The add method adds a new {@link Tuple} with given inputs to the list.
 *
 * @param start first element of {@link Tuple}.
 * @param end   second element of {@link Tuple}.
 */
void Interval::add(int start, int end) {
    list.push_back(Tuple(start, end));
}

/**
 * The getFirst method returns the first element at the list {@link vector}'s given index.
 *
 * @param index to use at getting tuple from {@link vector}.
 * @return the first element at the list {@link vector}'s given index.
 */
int Interval::getFirst(unsigned long index) {
    return list.at(index).getFirst();
}

/**
 * The getLast method returns the last element at the list {@link vector}'s given index.
 *
 * @param index to use at getting tuple from {@link vector}.
 * @return the last element at the list {@link vector}'s given index.
 */
int Interval::getLast(unsigned long index) {
    return list.at(index).getLast();
}

/**
 * The size method returns the size of the list {@link vector}.
 *
 * @return size of the list {@link vector}.
 */
unsigned long Interval::size() {
    return list.capacity();
}
