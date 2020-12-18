//
// Created by Eric Calasans on 09/11/20.
//

#ifndef CLASSES_COMPLEXO_H
#define CLASSES_COMPLEXO_H


class Complexo {
private:
    double realPart;
    double imaginarioPart;

public:
    //Construtor
    Complexo(double real = 0.0, double imag = 0.0);

    //Métodos
    void atribuiValor(double, double);
    void mostraValores();
    double getReal();
    double getImaginario();
    void setReal(double rl);
    void setImaginario(double im);

    double magnitude();

    //Operadores
    bool operator==(const Complexo& compl2);
    Complexo operator+(const Complexo& compl2);
    Complexo operator~();
};


#endif //CLASSES_COMPLEXO_H
