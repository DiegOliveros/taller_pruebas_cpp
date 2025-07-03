// test/pruebas.cpp
#include <cassert>
#include <iostream>

void probarSuma() {
    assert(2 + 2 == 4);
    std::cout << "pruebaSuma OK\n";
}

void probarResta() {
    assert(5 - 3 == 2);
    std::cout << "pruebaResta OK\n";
}
