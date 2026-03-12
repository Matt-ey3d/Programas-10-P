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

	int N, M, cromos[100000], i, ii, aux;

	cin >> N >> M;
	for (i = 0; i < M; ++i)
	{
		cin >> cromos[i];
	}
	for (i = 0; i < M; i++)
	{
		for (ii = 0; ii < M; ++ii)
		{
			if (cromos[ii] > cromos[i])
			{
				aux = cromos[ii];
				cromos[ii] = cromos[i];
				cromos[i] = aux;
			}
		}
	}
	for (i = 0; i < M; i++)
	{
		if (cromos[i] == cromos[i + 1])
		{
			--M;
			for (ii = i+1; ii <= M; ++ii)
			{
				cromos[ii] = cromos[ii + 1];
			}
			--i;
		}
	}
	cout << N - M << endl;

	return 0;
}