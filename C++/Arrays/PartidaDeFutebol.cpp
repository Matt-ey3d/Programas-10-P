#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int votos[23]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, num, votosTotal = 0, i, percentagem;

	do {
		cout << "Diga me o numero da camisola do jogador que quer votar : ";
		cin >> num;
		if (num >= 0 && num <= 23) {
			if (num == 0) {
				break;
			}
			else {
				votos[num - 1]++;
				++votosTotal;
			}
		}
		else {

			cout << "Número inválido, tenta outra vez. \n ";
		}
	} while (num != 0);

	cout << "RESULTADO DA VOTAÇÂO\nTotal de votos : " << votosTotal << "\n\n";

	for (i = 0; i < 23; i++) {

		if (votos[i] > 0) {
			percentagem = votos[i] / votosTotal;
			cout << "Jogador " << i + 1 << ": " << votos[i] << " votos (" << percentagem * 100 << "% dos votos)\n";
		}

	}


	return 0;

}
