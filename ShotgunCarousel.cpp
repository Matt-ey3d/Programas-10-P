#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int vitimas[6] = {}, i;
	string pessoas[10] = { "EU TENHO UMA FAM�LIA!", "Pressiona o bot�o! PRESSIONA O BOT�O!!", "Por favor deixa-me viver!!!", "...", "NUNCA MAIS TE CHATEIO NA VIDA! PROMETO!!", "AAAAAAAAAAAAAAAA!!!!!!!!!", "Ah, obrigado.", "Eu dou-te dinheiro, fama, TUDO! POR FAVOR N�O ME MATES!!!", "N�o me mates! Quem � que vai dar comida ao meu c�o???","J� n�o tinha amigos mesmo." };
	string nomes[10] = { "Joaquim Costa", "Fernando", "Beatriz Sousa", "Afonso Pacheco" };

	for (i = 0; i < 6; ++i)
	{
		vitimas[i] = (rand() % 10);
	}

	return 0;
}