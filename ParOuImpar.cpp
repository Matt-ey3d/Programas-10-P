#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	do
	{
		cout << "Escreve um n�mero:\n";
		cin >> num;
		if (num % 2 == 0)
		{
			cout << "O n�mero � par!\n";
		}
		else
		{
			cout << "O n�mero � �mpar!\n";
		}
	}while (num != 0);
	cout << "Inseriste o n�mero 0! J� foste!";

	return 0;
}



