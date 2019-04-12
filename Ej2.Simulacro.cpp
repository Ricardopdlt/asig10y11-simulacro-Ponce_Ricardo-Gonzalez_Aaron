//Ej2 simulacro
//Según un código de barras 
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	//ENTRADA
	long long num;

	//LOGICA
	cout << "ingrese codigo de barras: ";
	cin >> num;
	cout << "dia de vencimiento: ";
	cout << (num % 1000000000000) / 10000000000 << endl;
	cout << "mes de vencimiento: ";
	cout << (num % 10000000000) / 100000000 << endl;
	cout << "año de vencimiento: ";
	cout << (num % 100000000) / 10000 << endl;
	cout << "tipo de producto: ";
	cout << char((num % 10000) / 100) << endl;//ascii
	cout << "producto perecible (0:No; 1:Si): ";
	int perecible = num % 100;
	bool perecible1;
	perecible1 = (perecible > 0) * 1 + (perecible == 0) * 0;
	cout << perecible1;
	_getch();
}