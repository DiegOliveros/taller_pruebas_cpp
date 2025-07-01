#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../clases/Docente.h"
#include "../clases/Estudiante.h"
#include "../clases/Notas.h"

TEST_CASE("Docente funciona correctamente") {
    Docente d("María López", "123456");
    REQUIRE(d.getNombre() == "María López");
    REQUIRE(d.getCedula() == "123456");
}

TEST_CASE("Estudiante funciona correctamente") {
    Estudiante e("Carlos Ruiz", 101010);
    REQUIRE(e.getNombre() == "Carlos Ruiz");
    REQUIRE(e.getCodigo() == 101010);
}

TEST_CASE("Notas calcula correctamente el promedio") {
    Notas n(3.5, 4.0, 2.5);
    REQUIRE(n.promedio() == Approx(3.333).epsilon(0.01));
}
