//Ej4 simulacro

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	//ENTRADA
	long long num;

	//LOGICA
	int fragil;
	char fragil2;
	int diah, mesh, añoh;
	int dia, mes, año;
	int vencido;
	char vencidof;
	cout << "Ingrese codigo de barras: ";
	cin >> num;
	cout << "Ingrese la fecha del dia de hoy (Dia-mes-anio):";
	cin >> diah;
	cin >> mesh;
	cin >> añoh;
	cout << "Numero unico: ";
	cout << (num % 10000000000000000) / 10000000000000 << endl;
	fragil = (num % 10000000000000) / 1000000000000 ;
	fragil2 = (fragil > 0)*'N' + (fragil == 0)*'S';
	cout << "Fragil (Si:S o No:N): " << fragil2 << endl;
	cout << "Pais de procedencia: ";
	cout << char((num % 1000000000000) / 1000000000) << endl;
	cout << "Dia - Mes - Anio de vencimiento: ";
	dia = (num % 100000000) / 1000000;
	mes = (num % 1000000) / 10000;
	año = num % 10000;
	cout << dia << " - " << mes << " - " << año << endl;
	vencido = (añoh > año) * 1 + (año == añoh && mesh > mes) * 1 + (añoh == año && mesh == mes && diah > dia) * 1;
	vencidof = (vencido == 1)*'S' + (vencido == 0)*'N';
	cout << "El producto esta vencido (Si:S o No:N): " << vencidof;
	
	_getch();
}