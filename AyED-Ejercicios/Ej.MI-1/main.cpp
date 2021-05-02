/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado: Dados dos valores enteros A y B, informar la suma, la resta y el producto.
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2,resultado;                                               //declaracion de variables

    cout << "Ingrese un valor: ";                                           //imprime por pantalla
    cin >> num1;                                                            //guarda el valor ingresado en num1
    cout << "Ingrese un valor: ";                                           //imprime por pantalla
    cin >> num2;                                                            //guarda el valor ingresado en num2

    cout << "\nLa suma entre los valores es: " << num1 + num2 << endl;      //enter, imprime por pantalla y realiza la suma
    cout << "La resta entre los valores es: " << num1 - num2 << endl;       //imprime por pantalla y realiza la resta
    cout << "El producto entre los valores es: " << num1 * num2 << endl;    //imprime por pantalla y realiza el producto

    return 0;
}
