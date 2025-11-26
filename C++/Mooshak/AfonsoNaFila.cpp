#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, i, A, aux, pessoas = 0;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		cin >> A;
		if (i == 0 || A > aux)
		{
			aux = A;
			++pessoas;
		}
	}
	cout << pessoas << endl;

	return 0;
}
