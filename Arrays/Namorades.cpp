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
		cout << "Agora diz-me a alcunha que lhe d�s\n";
		cin >> nomes[i];
	}

	do
	{
		cout << "Agora diz o n�mero da pessoa querida\n";
		cout << "E eu digo quem �\n";
		cin >> num;
		num = num - 1;

		if (num >= 0 && num < 5)
		{
			cout << "O n�mero corresponde a " << namorades[num] << "\n";
			cout << "E a alcunha que lhe d�s � " << nomes[num] << "\n";

			cout << "Deseja sair? (s/n)\n";
			cin >> sair;
		}
		else
		{
			cout << "Essa criatura �-me desconhecida\n";
		}
	} while (sair != 's');

	return 0;
}
