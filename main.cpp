#include <iostream>
#include <stdio.h>
#include "src/Figura.cpp"

int main () {

    float radio, base, altura, a, b, c, lado;

    std::cout<<"\nRadio del círculo: "; std::cin>>radio;
    std::cout<<"Base del rectángulo: "; std::cin>>base;
    std::cout<<"Altura del rectángulo: "; std::cin>>altura;
    std::cout<<"Lado A del triángulo: "; std::cin>>a;
    std::cout<<"Lado B del triángulo: "; std::cin>>b;
    std::cout<<"Lado C del triángulo: "; std::cin>>c;
    std::cout<<"Lado del Hexágono: "; std::cin>>lado;

    Circulo *circulo = new Circulo(radio);
    Triangulo *triangulo = new Triangulo(a, b, c);
    Rectangulo *rectangulo = new Rectangulo(altura, base);
    Hexagono *hexagono = new Hexagono(lado);


    printf("\n| Figura \t | Dimensiones     \t | Perímetro \t | Área \t |");
    printf("\n| Círculo \t | radio=%.2f    \t | %.2f \t | %.2f \t |", radio, circulo->get_perimetro(), circulo->get_area());
    printf("\n| Triángulo \t | A=%.2f    \t\t | %.2f \t | %.2f \t |", a, triangulo->get_perimetro(), triangulo->get_area());
    printf("\n|        \t | B=%.2f    \t\t |        \t |        \t |", b);
    printf("\n|        \t | C=%.2f    \t\t |        \t |        \t |", c);
    printf("\n| Rectángulo \t | base=%.2f    \t | %.2f \t | %.2f \t |", base, rectangulo->get_perimetro(), rectangulo->get_area());
    printf("\n|        \t | altura=%.2f     \t |        \t |        \t |", altura);
    printf("\n| Hexágono \t | lado=%.2f     \t | %.2f \t | %.2f \t |", lado, hexagono->get_perimetro(), hexagono->get_area());

    return 0;
}