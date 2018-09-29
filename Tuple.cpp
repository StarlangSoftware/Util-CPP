//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#include "Tuple.h"

/**
 * The constructor of {@link Tuple} class which takes two integer inputs and initializes first and last variables
 * with given inputs.
 *
 * @param first integer input.
 * @param last  integer input.
 */
Tuple::Tuple(int first, int last) {
    this->first = first;
    this->last = last;
}

/**
 * Getter for the first item at {@link Tuple}.
 *
 * @return the first item.
 */
int Tuple::getFirst() {
    return first;
}

/**
 * Getter for the last item at {@link Tuple}.
 *
 * @return the last item.
 */
int Tuple::getLast() {
    return last;
}

