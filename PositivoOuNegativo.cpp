#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;

	do
	{
		cout << "Escreve um número:\n";
		cin >> num;

		if (num > 0)
		{
			cout << "O número é positivo!\n";
		}
		else
		{
			cout << "O número é negativo!\n";
		}
	} while (num != 0);
	cout << "Levas uma galheta tás aqui tás na Sibéria\n";
	cout << "Mas tu pensas que isto é o quê?\n";
	cout << "Pensas que podes gozar comigo assim inculto mal-feito?";

	return 0;
}