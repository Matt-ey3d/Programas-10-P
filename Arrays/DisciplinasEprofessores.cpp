#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num;
	string disciplinas[9] = { "Ingl�s", "Portugu�s","Matem�tica","TLP","ACSO", "EDF","FQ","AI","TIC" };
	string stores[9] = { "Helena", "Alice", "Lu�s", "Clara","Jo�o","S�rgio","C�lia","Vera","Clara" };
	do
	{
		cout << "\nQual n�mero queres para uma mat�ria?\n";
		cin >> num;
		if (num > 8 || num < 0)
		{
			cout << "\nErro - n�mero tem que ser entre 0 e 8\n";
		}
		else {
			cout << "O stor da disciplina " << disciplinas[num] << " � " << stores[num] << "\n";
			cout << "As disciplinas do teu curso s�o";
			for (int i = 0; i < 9; i++)
			{
				cout << "\n" << disciplinas[i];
			}
		}
	} while (num != 0);
	cout << "O n�mero 0 est� amaldi�oado - j� foste\n";
	return 0;
}