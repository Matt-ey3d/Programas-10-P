#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, K, i, ii, linhalivre, possivel = 0;
	char vazio;
	possivel = false;

	cin >> N;
	cin >> K;

	for (ii = 0; ii < N; ++ii)
	{
		linhalivre = 0;
		for (i = 0; i < N; ++i)
		{
			cin >> vazio;
			if (vazio == '.')
			{
				++linhalivre;
			}
		}
		if (linhalivre >= K)
		{
			possivel = 1;
		}
	}

	cout << possivel;

	return 0;
}
