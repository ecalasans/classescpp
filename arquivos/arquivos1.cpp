//
// Created by Eric Calasans on 25/12/20.
//
#include <fstream>
#include <iostream>
#include <cstdlib> //Pra usar exit()

int main(){
    system("clear");
    std::ifstream inFile;
    std::ofstream outFile;
    std::string nome_arquivo;
    std::fstream append_file;

    printf("Digite o nome do arquivo para ser aberto:  ");
    std::cin >> nome_arquivo;

    inFile.open(nome_arquivo.c_str());
    append_file.open("arquivo.txt", ios::app);
    char resposta;

    //Checagem se consegue abrir o arquivo
    if(inFile.fail()){
        printf("Não consigo abrir o arquivo!\n");
        exit(1);
    } else {
        printf("Tudo certo com o arquivo %s, porém ele já existe!\n"
               "Deseja sobrescreve-lo?(S/N)\n", nome_arquivo.c_str());
        std::cin >> resposta;

        if(std::tolower(resposta) == 'n'){
            printf("O arquivo não será sobrescrito!\n");
            exit(1);
        }
    }

    outFile.open("arquivo.txt");

    return 0;
}
