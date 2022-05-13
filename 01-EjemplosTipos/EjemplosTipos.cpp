#include <iostream>
#include <string>
#include <cassert>
using namespace std::literals;

int main()
{
    //Pruebas del tipo de dato int
	assert(2 == 1+1);
    assert(2 == 2);
    assert(2 != 5);
    assert(154 >= 102);
    assert(2 == 4 / 2);
    assert(56 == 7 * 8);
    assert(-6 == 2 * -3);

    //Pruebas del tipo de dato char
    
    assert('A' != 'B');  
    assert('B'== 'A' + 1);
    assert( 'a'!= 'A');
    assert('A' <= 'B'); //Por código ASCII

    //Pruebas del tipo de dato unsigned
    assert(0u == 0u);
    assert(100 <= 150);
    assert(5u==3u+2u);
    assert(99999999 == 99999998 + 1);

    //Pruebas del tipo de dato double
    assert(4.9 != 3.2 - 1.8);
    assert(0.0 - 1.0 == -1.0); 
    assert(0.1 == 1.0/10.0);
    assert(4.5 == 1.5 * 3.0 );
    assert(9.8 <= 10.2);
    assert(5.6 >= 3.2);

    //Pruebas del tipo de dato string
    assert("algoritmos"s == "algo"s + "ritmos"s);
    assert("1" <= "2");
    assert("ejercicio"s == "ejercicio"s);
    assert("AA"s < "AB"s);
    assert( "aaa"s >= "aa"s);

    //Pruebas del tipo de dato booleano
    assert(true);
    assert(!false);
    assert(false != true);
    assert(true == true);
    assert(true or false);
}