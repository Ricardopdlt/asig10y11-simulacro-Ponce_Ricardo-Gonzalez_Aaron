//Ej5 Simulacro
// Solucitud de un prestamo segun el puntaje

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

//funciones
int Puntosdesueldo(int a)
{
	int puntosdesueldo = (a < 1500) * 6 + (a>= 1500 && a <= 6000) * 12 + (a>6000)*18;
	return puntosdesueldo;
}
int Puntosdevivienda(char b)
{
	int puntosdevivienda = (b == 'P') * 2 + (b == 'A') * 5 + (b == 'M') * 10;
	return puntosdevivienda;
}
int Puntosdetarjeta(char c)
{
	int puntosdetarjeta = (c == 'S') * 6 + (c == 'N') * 0;
	return puntosdetarjeta;
}
int Puntosdefamilia(char d)
{
	int puntosdefamilia = (d == 'S') * 6 + (d == 'N') * 3;
	return puntosdefamilia;
}
int main()
{//entrada
	int x;
	char y;
	char z;
	char w;
	

//logica
	printf("Ingrese el monto de su sueldo:\n");
	cin >> x;
	printf("Tipo de vivienda (Pariente: P, Alquilada: A, Propia: M):\n");
	cin >> y;
	printf("¿Usted posee tarjeta de credito? (Si: S, No: N):\n");
	cin >> z;
	printf("¿Usted posee familia? (Si: S, No: N):\n");
	cin >> w;
	int resultado1 = Puntosdesueldo(x);
	int resultado2 = Puntosdevivienda(y);
	int resultado3 = Puntosdetarjeta(z);
	int resultado4 = Puntosdefamilia(w);
	int resultadofinal = resultado1 + resultado2 + resultado3 + resultado4;
	int prestamo = (resultadofinal > 20) * 1;

	//salida
	printf("Puntaje obtenido: ");
	cout << resultadofinal << endl;
	printf("Se le otorga el prestamo (Si: 1, No: 0): ");
	cout << prestamo;

	_getch();


}