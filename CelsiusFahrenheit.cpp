#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	char tipo;
	float graus=0, convert=0;

	cout << "Queres converter Celsius ou Fahrenheit? (C/F)\n";
	cin >> tipo;
	cout << "\nQuantos graus queres converter: ";
	cin >> graus;
	if (tipo == 'C')
	{
		convert = (graus * 1.8) + 32;
		cout << "\n" << graus << "C� = " << convert << "F�\n";
	}
	else if (tipo == 'F')
	{
		convert = (graus - 32) / 1.8;
		cout << "\n" << graus << "F� = " << convert << "C�\n";
	}
	else
	{
		cout << "Tipo n�o aceite\n";
	}

	return 0;
}