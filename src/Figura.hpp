#pragma once

class Figura {
    
    public:
        Figura();
        void set_perimetro();
        void set_area();

        // inline
        float get_perimetro() const { return perimetro; };
        float get_area() const { return area; };
        float perimetro;
        float area;
};

class Circulo: public Figura {
    public:
        Circulo(float r);
        void set_perimetro();
        void set_area();
    private:
        float radio;
};

class Triangulo: public Figura {
    public:
        Triangulo(float a, float b, float c);
        void set_perimetro();
        void set_area();
    private:
        float A;
        float B;
        float C;
};

class Rectangulo: public Figura {
    public:
        Rectangulo(float b, float a);
        void set_perimetro();
        void set_area();
    private:
        float base;
        float altura;
};

class Hexagono: public Figura {
    public:
        Hexagono(float l);
        void set_perimetro();
        void set_area();
    private:
        float lado;
};