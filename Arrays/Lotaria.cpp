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
	int guess, certos=0;

	for (int i = 0; i < 5; ++i)
	{
		lotaria[i] = (rand() % 50) + 1;
		cout << "LOTARIA!!!!!\nEscreva um n�mero entre 1 e 50:\n";
		cin >> guess;
		if (guess == lotaria[i])
		{
			++certos;
		}
	}
	cout << "N�meros certos: " << certos << "\n";
	cout << "N�meros da lotaria:" << "\n";
	for (int l = 0; l < 5; ++l)
	{
		cout << lotaria[l] << "\n";
	}
	if (certos == 5)
	{
		cout << "PARAB�NS!!!!!! GANHASTE 1 MILH�O DE BITCOIN!!!!!!!!!!!!!!!";
	}

	return 0;
}