#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int N, M, presentes[100000], orcamentos[100000], i, ii, aux, output;

	cin >> N >> M;
	for (i = 0; i < N; ++i)
	{
		cin >> presentes[i];
	}
	for (i = 0; i < N; i++)
	{
		for (ii = 0; ii < N; ++ii)
		{
			if (presentes[ii] > presentes[i])
			{
				aux = presentes[ii];
				presentes[ii] = presentes[i];
				presentes[i] = aux;
			}
		}
	}
	for (i = 0; i < M; ++i)
	{
		output = 0;
		cin >> orcamentos[i];
		for (ii = 0; ii < N; ++ii)
		{
			if (presentes[ii] <= orcamentos[i])
			{
				orcamentos[i] -= presentes[ii];
				
			}
		}
		cout << output << " ";
	}
	cout << endl;
	
	return 0;
}