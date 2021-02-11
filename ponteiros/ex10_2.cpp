//
// Created by Eric Calasans on 10/02/21.
//

/*
 * (Program) a. Write a program that stores the following numbers in the array named rates:
6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, and 9.0. Display the values in the array
by changing the address in a pointer called dispPt. Use a for statement in your program.
b. Modify the program written in Exercise 2a to use a while statement.
 */
#include <iostream>

void letraA(double *ptr){
    printf("*** letra a) ***\n");
    for (int i = 0; i < 13; ++i) {
        printf("%d. %.2f\n", i, *ptr++);
    }
}

void letraB(double *ptr){
    double *temp = ptr;
    int i = 0;
    printf("\n*** letra b) ***\n");
    while (temp < ptr + 13){
        printf("%d. %.2f\n", i, *temp++);
        i++;
    }
}

int main(){
    double rates[13] = {6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, 9.0};
    double *dispPtr = rates;

    letraA(dispPtr);
    letraB(dispPtr);

    return 0;
}
