//
// Created by Eric Calasans on 17/01/21.
//
#include <iostream>
#include <vector>

int prodEscalar(std::vector<int> X, std::vector<int> Y);

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {2,5,4,3,6};
    std::vector<int> A, B;
    A.assign(a, a+5);
    B.assign(b, b+5);

    int resultado = prodEscalar(A, B);

    printf("Produto escalar AB = %d\n", resultado);

    return 0;
}

int prodEscalar(std::vector<int> X, std::vector<int> Y){
    int tam = X.size();
    int prod_escalar = 0;
    for (int i = 0; i < tam; ++i) {
        prod_escalar += X[i] * Y[i];
    }

    return prod_escalar;
}


