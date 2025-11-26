#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int base, expoente, resultado, i;

	cout << "Diga-me a um número e o expoente\nBase: ";
	cin >> base;
	cout << "Expoente: ";
	cin >> expoente;
	resultado = base;
	for (i = 1; i < expoente; ++i)
	{
		resultado = resultado * base;
		cout << resultado << endl;
	}
	cout << base << "^" << expoente << " = " << resultado;

	return 0;
}