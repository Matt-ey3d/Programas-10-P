#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	do
	{
		cout << "Escreve um número:\n";
		cin >> num;
		if (num % 2 == 0)
		{
			cout << "O número é par!\n";
		}
		else
		{
			cout << "O número é ímpar!\n";
		}
	}while (num != 0);
	cout << "Inseriste o número 0! Já foste!";

	return 0;
}



