//
// Created by Olcay Taner Yıldız on 29.09.2018.
//

#include "Swap.h"

/**
 * The swap method takes a double array and two integer numbers i,j. And interchange the given array's
 * items at index i and index j.
 *
 * @param array double array input.
 * @param i     first index to swap.
 * @param j     second index to change.
 */
void Swap::swap(double* array, int i, int j) {
    double t = array[i];
    array[i] = array[j];
    array[j] = t;
}

/**
 * The swap method takes an integer array and two integer numbers i,j. And interchange the given array's
 * items at index i and index j.
 *
 * @param array integer array input.
 * @param i     first index to swap.
 * @param j     second index to change.
 */
void Swap::swap(int* array, int i, int j) {
    int t = array[i];
    array[i] = array[j];
    array[j] = t;
}
