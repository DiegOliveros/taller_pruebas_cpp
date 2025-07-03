// test/runner.cpp
#include <iostream>

// Declaración de pruebas definidas en pruebas.cpp
void probarSuma();
void probarResta();

int main() {
    std::cout << "Ejecutando pruebas...\n";
    probarSuma();
    probarResta();
    std::cout << "¡Todas las pruebas pasaron!\n";
    return 0;
}
