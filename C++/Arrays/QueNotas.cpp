#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int turma[3][3], i, ii;
	float mediaaluno, mediadisciplina, soma;

	for (i = 0; i < 3; ++i)
	{
		cout << i + 1 << "ª disciplina:\n";
		for (ii = 0; ii < 3; ++ii)
		{
			cout << "nota do " << ii + 1 << "º aluno: ";
			cin >> turma[i][ii];
		}
	}

	cout << endl;

	for (i = 0; i < 3; ++i)
	{
		soma = 0;
		cout <<"Média do " << i + 1 << "º aluno: ";
		for (ii = 0; ii < 3; ++ii)
		{
			soma = soma + turma[ii][i];
		}
		mediaaluno = soma / 3;
		cout << mediaaluno << endl;
	}

	cout << endl;

	for (i = 0; i < 3; ++i)
	{
		soma = 0;
		cout << "Média da " << i + 1 << "ª disciplina";
		for (ii = 0; ii < 3; ++ii)
		{
			soma = soma + turma[i][ii];
		}
		mediadisciplina = soma / 3;
		cout << mediadisciplina << endl;
	}

	return 0;
}