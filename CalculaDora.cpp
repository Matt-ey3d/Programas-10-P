#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha;
	double num1, num2;

	cout << "Queres fazer uma soma (1), subtra��o (2), multiplica��o (3), ou divis�o (4)?\n";
	cin >> escolha;
	cout << "Ent�o d�-me um n�mero\n";
	cin >> num1;
	cout << "E agora outro n�mero\n";
	cin >> num2;
	cout << "Sorry, s� d� 2 n�meros\n";

	if (escolha == 1)
	{
		cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
	}
	else if (escolha == 2)
	{
		cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
	}
	else if (escolha == 3)
	{
		cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
	}
	else if (escolha == 4)
	{
		cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
	}
	else
	{
		cout << "Infelizmente, o utilizador deste programa n�o sabe seguir instru��es simples, tente novamente mais tarde\n";
	}
}