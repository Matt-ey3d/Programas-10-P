#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num, maior = 0, menor = 2147483647;

	do
	{
		cout << "Inserir n�mero:\n";
		cin >> num;

		if (num < menor && num != 0)
		{
			menor = num;
		}
		if (num > maior)
		{
			maior = num;
		}
	} while (num != 0);

	cout << "O n�mero maior � " << maior << "\n";
	cout << "E o n�mero menor � " << menor << "\n";
	cout << "Como n�o gosto de zeros, acabou o programa!\n";

	return 0;
}


