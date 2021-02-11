//
// Created by Eric Calasans on 11/02/21.
//
/*
 * Define an array of 10 pointers to double-precision numbers. Then read 10 numbers
into the locations referenced by the pointers. Next, have your program sum the numbers
and store the result in a pointer-accessed location. Finally, have your program display the contents
of all locations, again using pointer notation.
 */

#include <iostream>

#define NUMELS 3

int main(){
    double *vars = new double[NUMELS];
    double *ap[NUMELS];
    double soma = 0;

    for (int i = 0; i < NUMELS; ++i) {
        ap[i] = &vars[i];
        std::cin >> *ap[i];
        soma += *ap[i];
    }
    printf("soma = %.2f", soma);

    delete[] vars;
    return 0;
}
