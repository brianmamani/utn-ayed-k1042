/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado: Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el
 * mayor entre ellos
 *
 */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int num1, num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese un numero: ";
    cin >> num2;
    if(num1>num2) cout << "El mayor numero es: " << num1;  //cuando es una sola sentencia no hace falta las llaves
    else cout << "\nEl mayor numero es: " << num2;
    return 0;
}
