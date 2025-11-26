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
	int i, tentativas = 0, certos, a;
	string resposta;
	char codigo[4] = {}, adivinhas[4] = {};

	for (i = 0; i < 4; ++i)
	{
		a = rand() % 2;
		if (a == 1)
		{
			codigo[i] = '1';
		}
		else
		{
			codigo[i] = '0';
		}
	}

	cout << "Tenho um código de 4 dígitos que quero que tu adivinhes\nO código é só de 0 e 1\n(Enter)";
	cin.ignore();

	do
	{
		certos = 0;
		cout << "Adivinha o código:\n";
		cin >> resposta;
		++tentativas;
		if (resposta.length() > 4)
			{
					cout << "Só 4 números, seu furta-cebolas!!!!\n";
			}
		for (i = 0; i < 4; ++i)
		{
			for (char c : resposta)
			{
				adivinhas[i] = c;
			}
			
			if (adivinhas[i] == codigo[i])
			{
				++certos;
			}
		}
		cout << "Acertaste " << certos << " dígitos\n";
	} while (certos < 4);

	if (tentativas < 4)
	{
		cout << "Fizeste batota, não acredito >:[\n\n";
	}
	else if (tentativas < 10)
	{
		cout << "Muito bem!!!\n\n";
	}
	else
	{
		cout << "Man, isso são demasiadas tentativas!\nTens cara de conseguir aborrecer uma pedra da calçada...\n\n";
	}

	return 0;
}