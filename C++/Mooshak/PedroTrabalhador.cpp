#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int A, L, C;

	cin >> A;
	cin >> L;
	cin >> C;

	if (A >= 3 && A * L * C >= 50)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}


	return 0;
}
