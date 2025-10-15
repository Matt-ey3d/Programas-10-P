#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()

{
	setlocale(LC_ALL, "portuguese");
	int num;
	string disciplinas[9] = { "Inglês", "Português","Matemática","TLP","ACSO", "EDF","FQ","AI","TIC" };
	string stores[9] = { "Helena", "Alice", "Luís", "Clara","João","Sérgio","Célia","Vera","Clara" };
	do
	{
		cout << "\nQual número queres para uma matéria?\n";
		cin >> num;
		if (num > 8 || num < 0)
		{
			cout << "\nErro - número tem que ser entre 0 e 8\n";
		}
		else {
			cout << "O stor da disciplina " << disciplinas[num] << " é " << stores[num] << "\n";
			cout << "As disciplinas do teu curso são";
			for (int i = 0; i < 9; i++)
			{
				cout << "\n" << disciplinas[i];
			}
		}
	} while (num != 0);
	cout << "O número 0 está amaldiçoado - já foste\n";
	return 0;
}