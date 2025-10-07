#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;


	do
	{
		cout << "Escreva um número:\n";
		cin >> num;
		if (num % 3 != 0 && num % 5 != 0)
		{
			cout << "O número não é múltiplo de 3 nem de 5\n";
		}
		else if (num % 3 == 0)
		{
			cout << "O número é múltiplo de 3\n";

			if (num % 5 == 0)
			{
				cout << "O número também é múltiplo de 5\n";
			}
			else
			{
				cout << "Mas o número não é múltiplo de 5\n";
			}
		}
		else
		{
			cout << "O número não é múltiplo de 3, mas é múltiplo de 5\n";
		}
	} while (num != 0);

	cout << "A roda na tua cabeça gira, mas o hamster está morto\n";
	cout << "\n";
	cout << "\n";

	return 0;
}