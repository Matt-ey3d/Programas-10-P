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

	int lotaria[5] = {};
	int guess, certos = 0, troca, aux, i;

	for (i = 0; i < 5; ++i)
	{
		lotaria[i] = (rand() % 50) + 1;
	}
	do
	{
		troca = 0;
		for (i = 0; i < 4; ++i)
		{
			if (lotaria[i] > lotaria[i + 1])
			{
				aux = lotaria[i];
				lotaria[i] = lotaria[i + 1];
				lotaria[i + 1] = aux;
				++troca;
			}
		}
	} while (troca != 0);
	cout << "LOTARIA!!!!!\n";
	for (i = 0; i < 5; ++i)
	{
		cout<<"Escreva um número entre 1 e 50:\n";
		cin >> guess;
		if (guess == lotaria[i])
		{
			++certos;
		}
	}
	cout << "Números certos: " << certos << "\n";
	cout << "Números da lotaria:" << "\n";
	for (int l = 0; l < 5; ++l)
	{
		cout << lotaria[l] << "\n";
	}
	if (certos == 5)
	{
		cout << "PARABÉNS!!!!!! GANHASTE 1 MILHÃO DE BITCOIN!!!!!!!!!!!!!!!";
	}

	return 0;
}