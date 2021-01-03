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
    std::string filename = "/Users/ericcalasans/Documents/Projetos/C++/cursocpp/arquivos/arquivo.txt";

    app_arquivo.open(filename.c_str(), std::ios::app);

    if(!app_arquivo.fail()){
        printf("Vou adicionar o nome de sua vó no final do arquivo!\n");
        app_arquivo << "Josefa Nunes Pires\n";
    } else {
        printf("Não consegui abrir o arquivo ou ele não existe!\n");
        exit(1);
    }
    app_arquivo.close();
    app_arquivo.open(filename.c_str(), std::ios::in); // Abre em modo leitura

    if(!app_arquivo.fail()){
        while( getline(app_arquivo, nome)){
            std::cout << nome << std::endl;
        }
    } else {
        printf("Não consegui abrir o arquivo no modo in...\n");
    }

    return 0;
}
