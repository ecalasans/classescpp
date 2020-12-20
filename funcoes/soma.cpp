//
// Created by Eric Calasans on 20/12/20.
//

#include <iostream>

void soma(double, double, double, double&);

int main(){
    double a = 1.0;
    double b = 2.0;
    double c = 3.0;
    double total = 0.0;

    soma(a,b,c,total);
    return 0;
}

void soma(double a, double b, double c, double& total){
    total = a+b+c;
    printf("Soma = %.2f\n", total);
}