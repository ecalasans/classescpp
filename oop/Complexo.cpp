//
// Created by Eric Calasans on 09/11/20.
//
#include "Complexo.h"
#include <iostream>
#include <cmath>

#define PI 3.14159265

Complexo::Complexo(double real, double imag):
    realPart(real), imaginarioPart(imag) {}

void Complexo::atribuiValor(double real, double imag) {
    realPart = real;
    imaginarioPart = imag;
}

void Complexo::mostraValores() {
    char sinal = '+';

    if (imaginarioPart < 0){
        sinal = '-';
        imaginarioPart *= -1;
    }
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

Complexo Complexo::operator*(const Complexo &compl2) {
    Complexo produto;
    produto.realPart = imaginarioPart*(realPart - compl2.imaginarioPart);
    produto.imaginarioPart = (realPart*compl2.imaginarioPart) + (imaginarioPart*compl2.realPart);

    return produto;
}

double addReal(const Complexo& a, const Complexo& b){
    return (a.realPart + b.realPart);
}
double addImag(const Complexo& a, const Complexo& b){
    return (a.imaginarioPart + b.imaginarioPart);
}
void toPolar(const Complexo& a){
    double mag = sqrt(pow(a.realPart, 2) + pow(a.imaginarioPart, 2));
    double angulo = atan(a.imaginarioPart/a.realPart) * 180 / PI;

    printf("Forma polar:  %.2f /_ %.2f", mag, angulo);

    return;
}
