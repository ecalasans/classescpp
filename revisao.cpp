//
// Created by Eric Calasans on 14/12/20.
//
#include <iostream>

int altera(int &valor){
    valor++;
    return valor + 3;
}

int main(){
    int x = 4;
    printf("Valor de x = %d\n", x);

    int y = altera(x);
    printf("Valor de y = %d\n", y);
    printf("Valor de x = %d\n", x);
    return 0;
}
