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

	int T, N, alturas[50000], aux;
	int i, ii;

	cin >> T;
	for (i = 0; i < T; ++i)
	{
		string output = "SIM";
		int trocas = 0;
		cin >> N;
		for (ii = 0; ii < N; ++ii)
		{
			cin >> alturas[ii];
		}
		for (ii = 0; ii < N; ++ii)
		{
			if (alturas[ii] > alturas[ii + 1])
			{
				trocas++;
				aux = alturas[ii];
				alturas[ii] = alturas[ii + 1];
				alturas[ii + 1] = aux;
				if (trocas > 1)
				{
					output = "NAO";
				}
			}
		}
		cout << output << endl;
	}

	return 0;

}
