/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado: Dadas dos fechas informar cual es la más reciente. Determine cuales serían los
 * datos de entrada y las leyendas a informar de acuerdo al proceso solicitado.
 *
 */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int fecha1, fecha2;
    cout << "Ingrese fecha (DDMMAAAA): ";
    cin >> fecha1;
    cout << "Ingrese fecha (DDMMAAAA): ";
    cin >> fecha2;
    if(fecha1>fecha2) cout << "\nLa fecha mas reciente es: " << fecha1;
    else cout << "\nLa fecha mas reciente es: " << fecha2;
    return 0;
}
