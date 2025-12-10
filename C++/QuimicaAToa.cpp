#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	char elemento; //ler cada caracter da fórmula química
	int num; //quantidade de algarismos que tem o número de átomos em cada elemento, se houver
	bool upper = false, lower = false, number = false, start = true; //se o caracter anterior é maiúsculo/minúsculo/número

	do
	{
		cin >> elemento; //ler caracter
		if (isupper(elemento)) //SE FOR MAIÚSCULO
		{
			if (number == false) //se não houver número atrás
			{
				if (start == false) //se não for o início da fórmula
				{
					cout << " 1" << endl;
				}
				else //se for o início da fórmula
				{
					start = false; //já não é o início da fórmula
				}
			}
			else //se houver número atrás
			{
				cout << endl;
			}
			if (upper == true) //se houver maiúscula atrás
			{
				cout << endl;
			}
			else //se não houver maiúscula atrás
			{
				upper = true; //o próximo caracter está à frente de uma maiúscula
				if (lower == true) //se houver minúscula atrás
				{
					cout << endl;
				}
			}
			cout << elemento;
			number = false; //não há número atrás
			num = 0;
		}
		else if (islower(elemento)) //SE FOR MINÚSCULO
		{
			lower = true; //o próximo caracter está à frente de uma minúscula
			upper = false; //não é maiúscula
			number = false; //não é número
			cout << elemento;
		}
		else
		{
			if (elemento != '.') //SE NÃO FOR UM PONTO (OU SEJA UM NÚMERO)
			{
				number = true;
				if (num > 0) //se há mais algarismos atrás
				{
					cout << elemento;
				}
				else //senão
				{
					cout << " " << elemento;
					++num; //adiciona 1 ao nº de algarismos
				}
			}
			else
			{
				if (number == false)
				{
					cout << " 1" << endl;
				}
			}
			upper = false; //não há maiúscula
		}
	} while (elemento != '.'); //LER CARACTERES ENQUANTO NÃO CALHAR O PONTO

	return 0;
}
