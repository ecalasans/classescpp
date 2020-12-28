//
// Created by Eric Calasans on 21/12/20.
//
#include <iostream>

int main(){
    int M[5] = {1,2,3};
    for (int i = 0; i < 5; ++i) {
        std::cout << M[i] << std::endl;
    }

    std::string  nome = "Eric Calasans de Barros"; //Essa versão possui o tipo std::string
    for (int i = 0; i < 20; ++i) {
        std::cout << nome[i] << std::endl;
    }

    return 0;
}
