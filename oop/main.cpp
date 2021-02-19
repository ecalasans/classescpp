#include <iostream>
#include "Complexo.h"

int main() {
    Complexo a(3.0,2.0);
    a.mostraValores();

    a.setReal(5.6);
    a.mostraValores();

    std::cout << a.magnitude() << std::endl;
    a = ~a;
    std::cout << a.getImaginario() << std::endl;

    Complexo b(2.0, 1.0);
    Complexo c = a + b;
    c.mostraValores();

    Complexo p = a * b;
    p.mostraValores();

    toPolar(a);
    return 0;

}
