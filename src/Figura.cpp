#include "Figura.hpp"
#include <math.h>

/* subclase */

Figura::Figura() {}

void Figura::set_perimetro() {}

void Figura::set_area() {}

/* constructores de las subclases */

Circulo::Circulo(float r): Figura{} {
    radio = r;
    set_perimetro();
    set_area();
}

Triangulo::Triangulo(float a, float b, float c): Figura{} {
    A = a;
    B = b;
    C = c;
    set_perimetro();
    set_area();
}

Rectangulo::Rectangulo(float b, float a): Figura{} {
    base = b;
    altura = a;
    set_perimetro();
    set_area();
}

Hexagono::Hexagono(float l): Figura{} {
    lado = l;
    set_perimetro();
    set_area();
}

// perimetros

void Circulo::set_perimetro() {
    perimetro = 3.1416 * 2 * radio;
}

void Triangulo::set_perimetro() {
    perimetro = A + B + C;
}

void Rectangulo::set_perimetro() {
    perimetro = 2 * (altura + base);
}

void Hexagono::set_perimetro() {
    perimetro = 6 * lado;
}

// areas

void Circulo::set_area() {
    area = 3.1416 * pow(radio, 2);
}

void Triangulo::set_area() {
    float s = (A + B + C) / 2;
    area = sqrt(s*(s - A)*(s - B)*(s - C));
}

void Rectangulo::set_area() {
    area = base * altura;
}

void Hexagono::set_area() {
    float apotema = sqrt(pow(lado, 2) - (lado + lado / 2));
    area = ( get_perimetro() * apotema ) / 2;
}