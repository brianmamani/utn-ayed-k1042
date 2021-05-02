/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado: Dada un numero entero de la forma (AAAAMMDD), que representa una fecha
 * valida mostrar el dia, mes y año que representa.
 *
 */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int fecha, day, month, year;
    cout << "Ingrese su fecha de nacimiento: (AAAAMMDD)" << endl;
    cin >> fecha;

    year = fecha / 10000;

    month = (fecha - year * 10000) / 100;

    day = fecha - (year * 10000) - (month * 100);

    cout << "\nEl dia es: " << day;
    cout << "\nEl mes es: " << month;
    cout << "\nEl año es: " << year;

    return 0;
}
