#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	string nomes[5] = {};
	char sair = 'n';

	do
	{
		for (int i = 0; i < 5; ++i)
		{
			cout << "Diga-me nomes\n";
			cin >> nomes[i];
			cout << "\n";
		}
		cout << "\n";
		for (int l = 4; l > -1; --l)
		{
			cout << nomes[l] << "\n";
		}
		cout << "Deseja sair? (s/n)\n";
		cin >> sair;
	} while (sair != 's');

	return 0;
}
