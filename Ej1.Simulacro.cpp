//ej 1 simulacro
// calcular el sueldo de un trabajador seg�n sus a�os de experiencia y si nacio en Lima o no.
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

//funciones
double Exp(double x)
{
	double exp = 900 + (x / 100) * 900;
	return exp;
}

double Exp1(double y)
{
	double exp1 = 1000 + (y / 100) * 900;
	return exp1;
}

int main()
{
	//entrada
	int a�os;
	char nac;
	double sueldo;
	double sueldoah;
	//logica
	printf("Ingrese sus anios de experiencia:\n");
	cin >> a�os;
	printf("�Usted nacio en Lima?: Si= L(l) o No= F(f)\n");
	cin >> nac;
	sueldo = (5 >= a�os >= 1)*Exp(a�os) + (a�os > 5)*Exp1(a�os);//SIN BONO
	sueldoah = (nac == 'L' || nac == 'l') *sueldo*1.15 + (nac == 'F' || nac == 'f')*sueldo*1.2;//CON BONO
	printf("Su sueldo sera de:\n");
	cout << sueldoah << " soles." << endl;

	_getch();

	//test1:
	//a�os=4
	//nac=L
	//sueldoah=1076.4
	//(si nac =F)
	//sueldoah= 1123.2

	//test2:
	//a�os=6
	//nac=L
	//sueldoah=1212.1
	//(si nac=F)
	//sueldoah=1264.8

}