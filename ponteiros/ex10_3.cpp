//
// Created by Eric Calasans on 11/02/21.
//
/*
 * Write a program that stores the following numbers in the array named miles: 15,
22, 16, 18, 27, 23, and 20. Have your program copy the data stored in miles to another array
named dist, and then display the values in the dist array. Your program should use pointer
notation when copying and displaying array elements.
 */
#include <iostream>

#define NUMELS 7

int main(){
    int miles[NUMELS] = {15, 22, 16, 18, 27, 23, 20};
    int *dist = miles;

    for (int i = 0; i < NUMELS; ++i) {
        *dist = miles[i];
        printf("%d. %d\n", i, *dist++);
    }

    return 0;
}