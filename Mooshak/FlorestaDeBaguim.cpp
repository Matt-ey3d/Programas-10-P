#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, K, i, ii, linhalivre;
	char vazio;
	bool possivel = false;

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
			possivel = true;
		}
	}

	cout << possivel;

	return 0;
}