/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado 3) a: Realizar un programa que lea una velocidad en km/hr y la transforme a
 * mts/seg.. El programa debe solicitar por pantalla un valor numérico, el luego
 * el usuario debe ingresar un valor, finalmente el programa debe mostrar por
 * pantalla el resultado de la conversión.
 *
 */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    float velocidad;                                            //declaracion de variable
    cout << "Ingrese velocidad en km/h: ";                      //imprime por pantalla
    cin >> velocidad;                                           //guarda dato en "velocidad"
    cout << "La velocidad en m/s: " << velocidad / 3.6 << endl; //imprime por pantalla y realiza operacion

    return 0;
}
