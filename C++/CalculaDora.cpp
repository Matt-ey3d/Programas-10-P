#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha;
	double num1, num2;

	cout << "Queres fazer uma soma (1), subtração (2), multiplicação (3), ou divisão (4)?\n";
	cin >> escolha;
	cout << "Então dá-me um número\n";
	cin >> num1;
	cout << "E agora outro número\n";
	cin >> num2;
	cout << "Sorry, só dá 2 números\n";

	switch (escolha)
	{
	case 1:
		cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
		break;
	case 2:
		cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
		break;
	case 3:
		cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
		break;
	default:
		cout << "Infelizmente, o utilizador deste programa não sabe seguir instruções simples, tente novamente mais tarde\n";
		break;
	}

	return 0;
}
