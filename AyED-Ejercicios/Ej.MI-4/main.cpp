/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado:  A partir de un valor entero ingresado por teclado, se pide informar:
                a) La quinta parte de dicho valor
                b) El resto de la división por 5
                c) La séptima parte del resultado del punto a)
 *
 */


#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int num;
    cout << "Ingrese un numero" << endl;
    cin >> num;

    cout << "\nLa quinta parte del numero es: " << num/5.0;
    cout << "\nEl resto de la division por cinco es: " << num%5;
    cout << "\nLa septima parte es: " << num/7;
    return 0;
}
