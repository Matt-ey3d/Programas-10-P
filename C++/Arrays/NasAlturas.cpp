#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int idades[30] = {}, i, media, contador = 0;
	float alturas[30] = {}, soma = 0;

	for (i = 0; i < 30; i++)
	{
		cout << "Dá-me a idade da pessoa:" << i + 1 << "\n";
		cin >> idades[i];
		cout << "Dá-me a altura em cm da pessoa:" << i + 1 << "\n";
		cin >> alturas[i];
		soma = soma + alturas[i];
	}

	media = soma / 4;
	cout << "A média de alturas de todos é " << media << " cm\n";

	for (i = 0; i < 30; i++)
	{
		if (idades[i] >= 13 && alturas[i] < media)
		{
			contador++;
		}
	}

	cout << "Você tem " << contador << " alunos com 13 anos ou mais e a altura inferior a " << media;

	return 0;
}
