#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;

	do
	{
		cout << "Escreve um n�mero:\n";
		cin >> num;

		if (num > 0)
		{
			cout << "O n�mero � positivo!\n";
		}
		else
		{
			cout << "O n�mero � negativo!\n";
		}
	} while (num != 0);
	cout << "Levas uma galheta t�s aqui t�s na Sib�ria\n";
	cout << "Mas tu pensas que isto � o qu�?\n";
	cout << "Pensas que podes gozar comigo assim inculto mal-feito?";

	return 0;
}