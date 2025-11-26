#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int troca = 0, aux, num[10] = { 15,7,54,12,1,2,5,23,14,4 };

	cout << "Os números estão desarumados\n";
	for (int j = 0; j < 10; ++j)
	{
		cout << num[j] << " ";
	}
	cout << "\nVou arrumá-los\n\n";
	do {
		troca = 0;
			for (int i = 0; i < 9; ++i)
			{
				if (num[i + 1] < num[i])
				{
					aux = num[i];
					num[i] = num[i + 1];
					num[i + 1] = aux;
					++troca;
					for (int m = 0; m < 10; ++m)
					{
						cout << num[m] << " ";
					}
					cout << "\n";
				}
			}
	} while (troca > 0);
	
	cout << "\nOs números ordenados são:\n";
	for (int l = 0; l < 10; ++l)
	{
		cout << num[l] << " ";
	}
	cout << "\n";

	return 0;
}
