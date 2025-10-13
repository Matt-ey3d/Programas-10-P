#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;
	string carros[3] = { "Volvo", "BMW", "Mercedes" };
	string sair = "n";

	do
	{
		cout << "Qual carro deseja saber?\n";
		cin >> num;

		if (num < 0 || num>2)
		{
			cout << "Número inválido - escreva um número entre 0 e 2\n";
		}
		else
		{
			if (num == 0)
			{
				cout << carros[0] << "\n";
			}
			else if (num == 1)
			{
				cout << carros[1] << "\n";
			}
			else if (num == 2)
			{
				cout << carros[2] << "\n";
			}
			cout << "Deseja sair? (s/n)\n";
			cin >> sair;
		}
	} while (sair == "n");
	cout << "Beijos na bunda, até segunda\n";

	return 0;
}
	
