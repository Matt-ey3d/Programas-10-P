#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int NumAviões, NumNuvens, Tempo, AuxX, AuxY, NumCruzamentos = 0, i, ii, XYAviaoOuNuvem[200][200] = { 0 }, XYSentidoAviao[200][200] = { 0 };
	cin >> NumAviões >> NumNuvens >> Tempo;
	for (i = 0; i < NumAviões; i++) {
		cin >> AuxX;
		cin >> AuxY;
		XYAviaoOuNuvem[AuxX][AuxY]++;
		XYSentidoAviao[AuxX][AuxY] = 1;
	}
	for (i = 0; i < NumNuvens; i++) {
		cin >> AuxX;
		cin >> AuxY;
		XYAviaoOuNuvem[AuxX][AuxY] = -1;
	}

	for (i = 0; i < 100 + Tempo; i++) {
		for (ii = 0; ii < 100 + Tempo; ii++)
		{
			if (XYAviaoOuNuvem[i][ii] != 0)
			{
				if (XYAviaoOuNuvem[i][ii] % 2 == 0) {
					NumCruzamentos += XYAviaoOuNuvem[AuxX][AuxY] / 2;
				}

			}
		}
	}

	return ;
}