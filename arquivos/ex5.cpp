//
// Created by Eric Calasans on 02/01/21.
//
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

int main(){
    system("clear");
    std::ifstream leitura;
    std::fstream arquivo;
    std::fstream arqbackup;
    std::string nome_arq, nome_bak;
    std::string linha;

    printf("Digite o nome do arquivo:  ");
    std::cin >> nome_arq;

    nome_bak = nome_arq + ".bak";
    nome_arq = nome_arq + ".dat";

    leitura.open("empregados.dat", std::ios::in);
    arquivo.open(nome_arq.c_str(), std::ios::out);
    arqbackup.open(nome_bak.c_str(), std::ios::out);

    while(getline(leitura, linha)){
        std::cout << linha << std::endl;
        arquivo << linha << std::endl;
        arqbackup << linha << std::endl;
    }

    arquivo.close();
    arqbackup.close();
    leitura.close();
    return 0;
}