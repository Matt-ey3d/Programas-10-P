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

	int turma[10][10], i, ii, escolha, maior = -1, melhoraluno, melhordisciplina;
	float mediaaluno, mediadisciplina, soma;
	string nomes[10] = { "António","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" }, disciplinas[10] = { "Português","Inglês","Física","TLP","TIC","Matemática","ACSO","Filosofia","Química","Ed. Fís." };

	for (i = 0; i < 10; ++i)
	{
		cout << disciplinas[i] << endl;
		for (ii = 0; ii < 10; ++ii)
		{
			cout << "Nota de " << nomes[ii] << ": ";
			cin >> turma[i][ii];
		}
		system("cls");
	}

	do
	{
		system("cls");
		cout << "(0) Sair\n(1) Média dos alunos\n(2) Média das disciplinas\n(3) Melhor nota de todas\nR.: ";
		cin >> escolha;
		switch (escolha)
		{
		case 0:
			break;

		case 1:
			cout << endl << "Média dos alunos" << endl;

			for (i = 0; i < 10; ++i)
			{
				soma = 0;
				cout << "Média de " << nomes[i] << ": ";
				for (ii = 0; ii < 10; ++ii)
				{
					soma = soma + turma[i][ii];
				}
				mediaaluno = soma / 10;
				cout << mediaaluno << endl;
			}
			cout << endl;
			break;

		case 2:
			for (i = 0; i < 10; ++i)
			{
				soma = 0;
				cout << "Média de " << disciplinas[i] << ": ";
				for (ii = 0; ii < 10; ++ii)
				{
					soma = soma + turma[i][ii];
				}
				mediadisciplina = soma / 10;
				cout << mediadisciplina << endl;
			}
			cout << endl;
			break;

		case 3:
			for (i = 0; i < 10; ++i)
			{
				for (ii = 0; ii < 10; ++ii)
				{
					if (turma[i][ii] > maior)
					{
						maior = turma[i][ii];
						melhoraluno = i;
						melhordisciplina = ii;
					}
				}
			}
			cout << "A melhor nota foi" << maior << endl;
			cout<<"Esta nota pertence a " << nomes[melhoraluno] << ", na disciplina de " << disciplinas[melhordisciplina] << endl;
			break;

		default:
			break;
		}
		system("pause");
	} while (escolha != 0);
	return 0;
}