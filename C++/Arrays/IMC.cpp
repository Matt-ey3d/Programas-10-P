#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	float alturas[10] = {}, pesos[10] = {}, media, soma = 0, IMC[10] = {};
	int escolha, i, num;

	do
	{
		cout << "Se deseja sair, digite 0\nSenão, digite 1\n";
		cin >> num;
		if (num == 0)
		{
			break;
		}
		cout << "Vamos calcular o IMC de 10 pessoas\n";
		for (i = 0; i < 10; ++i)
		{
			cout << "Insira a altura da " << i + 1 << "ª pessoa (em metros)\n";
			cin >> alturas[i];
			cout << "E o seu peso (em quilogramas)\n";
			cin >> pesos[i];
		}
		do
		{
			for (i = 0; i < 10; ++i)
			{
				IMC[i] = pesos[i] / (alturas[i] * alturas[i]);
			}
			cout << "Agora escolha entre\nSair (0)\nInserir os valores novamente (1)\nSaber o IMC de uma das pessoas (2)\nCalcular a média dos IMCs (3)\n";
			cin >> num;
			if (num == 1)
			{
				for (i = 0; i < 10; ++i)
				{
					cout << "Insira a altura da " << i + 1 << "ª pessoa\n";
					cin >> alturas[i];
					cout << "E o seu peso\n";
					cin >> pesos[i];
				}
			}
			else if (num == 2)
			{
				cout << "Insira um número de 1 a 10\nE eu calculo o IMC da pessoa correspondente\n";
				cin >> escolha;
				cout << "O IMC da " << escolha << "ª pessoa é " << IMC[escolha-1] << endl;
			}
			else if (num == 3)
			{
				cout << "A média é\n";
				for (i = 0; i < 10; ++i)
				{
					soma = soma + IMC[i];
				}
				media = soma / 10;
				cout << media << endl;
			}
			else if (num == 0)
			{
				break;
			}
			else
			{
				cout << "Essa opção não existe" << endl;
			}
		} while (num != 0);
	} while (num != 0);

	return 0;
}