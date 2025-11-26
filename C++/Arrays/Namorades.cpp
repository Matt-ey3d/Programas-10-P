#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()

{
	setlocale(LC_ALL, "portuguese");

	string namorades[5] = {};
	string nomes[5] = {};
	int num;
	char sair = 'n';

	for (int i = 0; i < 5; ++i)
	{
		cout << "Diz-me o nome do teu interesse amoroso\n";
		cin >> namorades[i];
		cout << "Agora diz-me a alcunha que lhe dás\n";
		cin >> nomes[i];
	}

	do
	{
		cout << "Agora diz o número da pessoa querida\n";
		cout << "E eu digo quem é\n";
		cin >> num;
		num = num - 1;

		if (num >= 0 && num < 5)
		{
			cout << "O número corresponde a " << namorades[num] << "\n";
			cout << "E a alcunha que lhe dás é " << nomes[num] << "\n";

			cout << "Deseja sair? (s/n)\n";
			cin >> sair;
		}
		else
		{
			cout << "Essa criatura é-me desconhecida\n";
		}
	} while (sair != 's');

	return 0;
}
