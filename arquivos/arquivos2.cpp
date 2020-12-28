//
// Created by Eric Calasans on 28/12/20.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(){
    system("clear");
    std::fstream app_arquivo;
    std::string nome;
    std::ifstream leitura;

    app_arquivo.open("arquivo.txt", std::ios::app);

    if(!app_arquivo.fail()){
        printf("Vou adicionar o nome de sua vó no final do arquivo!\n");
        app_arquivo << "Josefa Nunes Pires\n";
    } else {
        printf("Não consegui abrir o arquivo ou ele não existe!\n");
        exit(1);
    }
    app_arquivo.close();
    app_arquivo.open("arquivo.txt", std::ios::in);

    if(!app_arquivo.fail()){
        getline(app_arquivo, nome);
        while(app_arquivo.good()){
            std::cout << nome << std::endl;
            getline(app_arquivo, nome);
        }
    } else {
        printf("Não consegui abrir o arquivo no modo in...\n");
    }

    return 0;
}
