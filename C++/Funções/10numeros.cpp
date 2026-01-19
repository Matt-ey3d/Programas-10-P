#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;

void media(int N[10])
{
	int soma=0, média;

	for (int i = 0; i < 10; ++i)
	{
		soma += N[i];
	}
	média = soma / 4;
	cout << "A média dos números é " << média<<endl;
}

void minimo(int N[10])
{
	int mínimo=N[0];

	for (int i = 1; i < 10; ++i)
	{
		if (N[i] < mínimo)
		{
			mínimo = N[i];
		}
	}
	cout << "O número mínimo é " << mínimo << endl;
}

void maximo(int N[10])
{
	int máximo = N[0];

	for (int i = 1; i < 10; ++i)
	{
		if (N[i] > máximo)
		{
			máximo = N[i];
		}
	}
	cout << "O número máximo é " << máximo << endl;
}


void main()
{
	setlocale(LC_ALL, "Portuguese");
	int menu, numeros[10];

	cout << "Insira 10 números:";
	for (int i = 0; i < 10; ++i)
	{
		cin >> numeros[i];
	}
	system("cls");
	do
	{
		cout << "[0] Sair\n[1] Calcular a média dos números\n[2] Exibir o número mínimo\n[3] Exibir o número máximo\nOpção: ";
		cin >> menu;
		system("cls");
		switch (menu)
		{
		case 1:
			media(numeros);
			break;
		case 2:
			minimo(numeros);
			break;
		case 3:
			maximo(numeros);
			break;
		case 0:
			break;
		default:
			cout << "Número inválido";
		}
		system("pause");
	} while (menu != 0);
}
