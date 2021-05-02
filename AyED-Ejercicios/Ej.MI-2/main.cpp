/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado: Dada una terna de números naturales que representan al día, al mes y al año de una
 * determinada fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
 *
 */

#include <iostream>
#include <locale.h>                                                     //incluimos libreria

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");                                       //libreria para escribir tildes y ñ
    int day, month, year;                                               //declaracion de variables
    cout << "INGRESE SU FECHA DE NACIMIENTO" << endl;                   //imprimir pon pantalla
    cout << "\nIngrese el dia: ";
    cin >> day;                                                         //lee y guarda el valor en day
    cout << "Ingrese el mes: ";
    cin >> month;                                                       //lee y guarda el valor en month
    cout << "Ingrese el año: ";
    cin >> year;                                                        //lee y guarda el valor en year
    cout << "\nAAAMMDD: " << year*10000+month*100+day << endl;          //operacion aritmeticas para el formato aaaammdd
    return 0;
}
