
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../utils/catch.hpp"
#include "ej2.h"


bool test_setter(Fecha f, int d, int m, int a) {
    f.setDia(d);
    f.setMes(m);
    f.setAnio(a);
    return f.getDia() == d && f.getMes() == m && f.getAnio() == a;
}

TEST_CASE( "1: Getters y Setters", "[multi-file:2]" ) {
    REQUIRE( Fecha(1,1,1900).getDia() == 1);
    REQUIRE( Fecha(1,1,1900).getMes() == 1);
    REQUIRE( Fecha(1,1,1900).getAnio() == 1900);
    REQUIRE( test_setter(Fecha(1,1,1900), 2, 2, 2000));
}

bool test_increment() {
    Fecha f(1,1,1900);
    f++;
    if(f.getDia() != 2 || f.getMes() != 1 || f.getAnio() != 1900) return false;
    f.setDia(31);
    f.setMes(12);
    f++;
    if(f.getDia() != 1 || f.getMes() != 1 || f.getAnio() != 1901) return false;
    f.setDia(31);
    f.setMes(1);
    f++;
    if(f.getDia() != 1 || f.getMes() != 2 || f.getAnio() != 1901) return false;
    f.setDia(30);
    f.setMes(4);
    f++;
    if(f.getDia() != 1 || f.getMes() != 5 || f.getAnio() != 1901) return false;
    f.setDia(28);
    f.setMes(2);
    f++;
    if(f.getDia() != 1 || f.getMes() != 3 || f.getAnio() != 1901) return false;
    return true;
}

bool test_decrement(){
    Fecha f(1,1,1900);
    f--;
    if(f.getDia() != 31 || f.getMes() != 12 || f.getAnio() != 1899) return false;
    f.setDia(1);
    f.setMes(1);
    f--;
    if(f.getDia() != 31 || f.getMes() != 12 || f.getAnio() != 1898) return false;
    f.setDia(1);
    f.setMes(2);
    f--;
    if(f.getDia() != 31 || f.getMes() != 1 || f.getAnio() != 1898) return false;
    f.setDia(1);
    f.setMes(5);
    f--;
    if(f.getDia() != 30 || f.getMes() != 4 || f.getAnio() != 1898) return false;
    f.setDia(1);
    f.setMes(3);
    f--;
    if(f.getDia() != 28 || f.getMes() != 2 || f.getAnio() != 1898) return false;
    return true;
}

TEST_CASE( "2: Calculo correcto de fecha", "[multi-file:2]" ) {
    REQUIRE( test_increment());
    REQUIRE( test_decrement());
    REQUIRE( Fecha(1,1,1900) + 50 == Fecha(20,2,1900));
    REQUIRE( Fecha(1,1,1900) + 365 == Fecha(1,1,1901));
}
