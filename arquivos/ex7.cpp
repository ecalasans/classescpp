//
// Created by Eric Calasans on 02/01/21.
//
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>

int main(){
    system("clear");
    std::fstream dados;
    double hourly_rate, hours_worked, gross_pay;
    std::string funcionario, fone;

    dados.open("dados.dat", std::ios::in);

    if(!dados.fail()){
        while (dados.good()){
            dados >> funcionario;
            dados >> fone;
            dados >> hourly_rate >> hours_worked;

            gross_pay = hourly_rate * hours_worked;

            printf("%s irá receber %.2f\n", funcionario.c_str(), gross_pay);
        }
    } else {
        printf("Arquivo não pode ser aberto!\n");
    }

    return 0;
}