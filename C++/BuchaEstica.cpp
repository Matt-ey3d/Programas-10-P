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
		cout << "Inserir número:\n";
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

	cout << "O número maior é " << maior << "\n";
	cout << "E o número menor é " << menor << "\n";
	cout << "Como não gosto de zeros, acabou o programa!\n";

	return 0;
}


