//
// Created by Eric Calasans on 14/01/21.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int getOpen(std::fstream&); // function prototype - pass reference to an fstream
void inOut(std::fstream&); // function prototype - pass reference to an fstream
int main()
{
    std::fstream outFile; // filename is an ofstream object
    getOpen(outFile); // open the file
    inOut(outFile); // write to it
    return 0;
}
int getOpen(std::fstream& fileOut)
{
    std::string name;
    std::cout << "\nEnter a file name: ";
    getline(std::cin,name);
    fileOut.open(name.c_str(), std::ios::in); // open the file

    if(!fileOut.fail()){
        char opcao;
        printf("O arquivo já existe!  Deseja sobrescrever?(S/N):  ");
        std::cin >> opcao;

        if(opcao == 'S'){
            fileOut.close();
            fileOut.open(name.c_str(), std::ios::out);
        } else {
            exit(1);
        }
    } else {
        return 1;
    }
}
void inOut(std::fstream& fileOut)
{
    const int NUMLINES = 5; // number of lines
    int count;
    std::string line;
    std::cout << "Please enter five lines of text:" << std::endl;
    for (count = 0; count < NUMLINES; ++count)
    {
        getline(std::cin,line);
        fileOut << line << std::endl;
    }
    std::cout << "\nThe file has been successfully written.";
    return;
}