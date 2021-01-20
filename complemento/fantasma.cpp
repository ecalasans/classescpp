//
// Created by Eric Calasans on 20/01/21.
//
#include <iostream>
#include <string>

int main(){
    int numero;
    std::string mensagem;
    std::cout << "Digite um numero:  ";
    std::cin >> numero;
    std::cout << "O numero foi \n" << numero << std::endl;

    std::cout << "Digite um texto: \n";
    getline(std::cin, mensagem);
    std::cout << "O texto foi \n" << mensagem << std::endl;
    std::cout << int(mensagem.length()) << std::endl;
    return 0;
}
