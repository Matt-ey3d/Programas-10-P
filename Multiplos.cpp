#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;


	do
	{
		cout << "Escreva um n�mero:\n";
		cin >> num;
		if (num % 3 != 0 && num % 5 != 0)
		{
			cout << "O n�mero n�o � m�ltiplo de 3 nem de 5\n";
		}
		else if (num % 3 == 0)
		{
			cout << "O n�mero � m�ltiplo de 3\n";

			if (num % 5 == 0)
			{
				cout << "O n�mero tamb�m � m�ltiplo de 5\n";
			}
			else
			{
				cout << "Mas o n�mero n�o � m�ltiplo de 5\n";
			}
		}
		else
		{
			cout << "O n�mero n�o � m�ltiplo de 3, mas � m�ltiplo de 5\n";
		}
	} while (num != 0);

	cout << "A roda na tua cabe�a gira, mas o hamster est� morto\n";
	cout << "\n";
	cout << "\n";

	return 0;
}