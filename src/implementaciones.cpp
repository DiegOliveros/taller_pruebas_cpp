#include "Docente.h"
#include "Estudiante.h"
#include "Notas.h"

Docente::Docente(std::string n, std::string c) : nombre(n), cedula(c) {}
std::string Docente::getNombre() const { return nombre; }
std::string Docente::getCedula() const { return cedula; }

Estudiante::Estudiante(std::string n, int c) : nombre(n), codigo(c) {}
std::string Estudiante::getNombre() const { return nombre; }
int Estudiante::getCodigo() const { return codigo; }

Notas::Notas(float n1, float n2, float n3) : nota1(n1), nota2(n2), nota3(n3) {}
float Notas::promedio() const { return (nota1 + nota2 + nota3) / 3.0; }
