#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <chrono>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int matriz1[5][3], matriz2[5][3], matrizsoma[5][3], i, ii;
	char escolha;

	cout << "Matriz 1 (5 linhas, 3 colunas)" << endl;
	for (ii = 0; ii < 5; ++ii)
	{
		for (i = 0; i < 3; ++i)
		{
			cin >> matriz1[ii][i];
		}
	}
	cout << "Matriz 2 (5 linhas, 3 colunas)" << endl;
	for (i = 0; i < 5; ++i)
	{
		for (ii = 0; ii < 3; ++ii)
		{
			cin >> matriz2[i][ii];
		}
	}
	do
	{
		system("cls");
		cout << "Somar as matrizes (+)\nSubtrair as matrizes(-)\nSair (0)" << endl << "\nOpção: ";
		cin >> escolha;
		if (escolha == '+')
		{
			cout << "\nSoma das matrizes" << endl;
			for (i = 0; i < 5; ++i)
			{
				for (ii = 0; ii < 3; ++ii)
				{
					matrizsoma[i][ii] = matriz1[i][ii] + matriz2[i][ii];
					cout << matrizsoma[i][ii] << " ";
				}
				cout << endl;
			}
			system("pause");
		}
		else if (escolha == '-')
		{
			cout << "\nSubtração das matrizes" << endl;
			for (i = 0; i < 5; ++i)
			{
				for (ii = 0; ii < 3; ++ii)
				{
					matrizsoma[i][ii] = matriz1[i][ii] - matriz2[i][ii];
					cout << matrizsoma[i][ii] << " ";
				}
				cout << endl;
			}
			system("pause");
		}
		else if (escolha=='0')
		{
			system("cls");
			cout << "A sair...";
			Sleep(1000);
			system("cls");
		}
		else
		{
			cout << "Resposta inválida\n";
			system("pause");
		}
	} while (escolha != '0');
	

	return 0;
}
