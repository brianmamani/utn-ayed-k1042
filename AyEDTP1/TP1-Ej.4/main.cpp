/* Copyright 2021, Brian Abel Mamani Condori.
 * All rights reserved.
 *
 * Enunciado 4) Confeccionar un programa que calcule la solución de una ecuación cuadrática:
 * y = ax^2 +bx + c
 * Realizar un adecuado análisis del problema, entendiendo los posibles
 * resultados que se puedan generar. Tener en cuenta en ambos casos
 * seleccionar los tipos de datos más adecuados.
 *
 */

#include <iostream>
#include <locale.h>
#include <math.h>                                                                     //libreria para realizar operaciones matematicas

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    float a,b,c;                                                                      //declaracion de variables
    cout << "***FUNCIÓN CUADRATICA y = AX^2+BX+C***" << endl << endl;                 //imprime por pantalla
    cout << "Ingrese el valor A: ";                                                   //imprime por pantalla
    cin >> a;                                                                         //almacena valor a en variable "a"
    cout << "Ingrese el valor B: ";                                                   //imprime por pantalla
    cin >> b;                                                                         //almacena valor b en  variable "b"
    cout << "Ingrese el valor C: ";                                                   //imprime por pantalla
    cin >> c;                                                                         //almacena valor c en variable "c"

    if (((pow(b, 2)-4*a*c)<0))                                                        //aplicamos propiedad discriminante
    {
        cout << "\nSyntax Error (Solución imaginaria)" << endl;                       //imprime por pantalla
        return 0;
    }
    else
    {
        cout << "X1 = " << (-b+sqrt(pow(b, 2)-4*a*c))/(2*a) << endl;                   //realizamos operacion raiz 1
        cout << "X2 = " << (-b-sqrt(pow(b, 2)-4*a*c))/(2*a) << endl;                   //realizamos operacion raiz 2
    }
    return 0;
}
