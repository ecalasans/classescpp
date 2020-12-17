//
// Created by Eric Calasans on 09/11/20.
//
#include "Complexo.h"
#include <iostream>
#include <cmath>

Complexo::Complexo(double real, double imag):
    realPart(real), imaginarioPart(imag) {}

void Complexo::atribuiValor(double real, double imag) {
    realPart = real;
    imaginarioPart = imag;
}

void Complexo::mostraValores() {
    char sinal = '+';

    if (imaginarioPart < 0) sinal = '-';
    std::cout << "Complexo:  " << realPart << ' ' << sinal
        << ' ' << imaginarioPart << "i\n";
}

double Complexo::getReal() { return realPart; }
double Complexo::getImaginario() { return imaginarioPart; }

void Complexo::setReal(double rl) { realPart = rl; }
void Complexo::setImaginario(double im) { imaginarioPart = im; }

double Complexo::magnitude() {
    return sqrt(pow(realPart, 2) + pow(imaginarioPart, 2));
}

bool Complexo::operator==(const Complexo& compl2) {
    if(realPart == compl2.realPart && imaginarioPart == compl2.imaginarioPart){
        return true;
    } else {
        return false;
    }
}

Complexo Complexo::operator+(const Complexo& compl2) {
    Complexo c;
    c.realPart = realPart + compl2.realPart;
    c.imaginarioPart = imaginarioPart + compl2.imaginarioPart;

    return c;
}

Complexo Complexo::operator~() {
    Complexo x;
    x.realPart = realPart;
    x.imaginarioPart = (-1)*imaginarioPart;
    return x;
}
