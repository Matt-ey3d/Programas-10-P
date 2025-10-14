#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;
	string disciplinas[5] = { "Portugu�s", "Matem�tica", "Ingl�s", "F�sico-Qu�mica", "Ser um chato do cara�as" };
	string sair = "n";

	do
	{
		cout << "Qual disciplina escolar deseja saber?\n";
		cin >> num;

		if (num < 0 || num > 4)
		{
			cout << "N�mero inv�lido - escreva um n�mero entre 0 e 4\n";
		}
		else
		{
			if (num == 0)
			{
				cout << disciplinas[0] << "\n";
			}
			else if (num == 1)
			{
				cout << disciplinas[1] << "\n";
			}
			else if (num == 2)
			{
				cout << disciplinas[2] << "\n";
			}
			else if (num == 3)
			{
				cout << disciplinas[3] << "\n";
			}
			else if (num == 4)
			{
				cout << disciplinas[4] << "\n";
			}
			cout << "Deseja sair? (s/n)\n";
			cin >> sair;
		}
	} while (sair == "n");
	cout << "Beijos na bunda, at� segunda\n";

	return 0;
}

