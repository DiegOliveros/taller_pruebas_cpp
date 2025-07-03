#pragma once
#include <string>

class Docente {
    std::string nombre;
    std::string cedula;

public:
    Docente(std::string n, std::string c);
    std::string getNombre() const;
    std::string getCedula() const;
};
