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

	int adivinha, randomNum = (rand() % 99) + 1, quantos = 0;

	do {
		cout << "Adivinha o n�mero em que estou a pensar :D\n";
		cin >> adivinha;
		++quantos;

		if (adivinha < randomNum)
		{
			cout << "O n�mero que eu estou a pensar � \33[33mmaior do que esse\33[0m\n";
		}
		else if (adivinha > randomNum)
		{
			cout << "O n�mero que eu estou a pensar � \33[34mmenor do que esse\33[0m\n";
		}
	} while (adivinha != randomNum);

	if (quantos < 6)
	{
		cout << "�S UM \33[96mDEUS\33[0m :O\n";
		cout << "Acertaste o n�mero em \33[31m" << quantos << " TENTATIVAS\33[0m! WOW!!!!\n";
	}
	else if (quantos < 11)
	{
		cout << "Parab�ns!\n";
		cout << "Acertaste o n�mero em \33[31m" << quantos << " tentativas\33[0m!\n";
	}
	else
	{
		cout << "Tu tens cara de quem o �nico pensamento inteligente que teve morreu sozinho e com medo\n";
		cout << "Acertaste o n�mero em \33[31m" << quantos << " tentativas\33[0m\n";
		cout << "Eu juro-te que ningu�m que conhe�o precisa de tantas tentativas, �s mesmo calhau\n";
	}
	return 0;
}