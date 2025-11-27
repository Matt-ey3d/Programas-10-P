#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int N, i, ii, menores;

	cin >> N;
	int velas[100000];
	for (i = 0; i < N; ++i)
	{
		menores = 0;
		cin >> velas[i];
		for (ii = 0; ii < i; ++ii)
		{
			if (velas[ii] < velas[i])
			{
				++menores;
			}
		}
		cout << menores << " ";
	}
	cout << endl;

	return 0;
}