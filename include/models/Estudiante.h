#pragma once
#include <string>

class Estudiante {
    std::string nombre;
    int codigo;

public:
    Estudiante(std::string n, int c);
    std::string getNombre() const;
    int getCodigo() const;
};
