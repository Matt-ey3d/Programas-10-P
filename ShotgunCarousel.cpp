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

	int vitimas[6] = {}, i, j;
	string pessoas[10] = { "EU TENHO UMA FAMÍLIA!", "Pressiona o botão! PRESSIONA O BOTÃO!!", "Por favor deixa-me viver!!!", "...", "NUNCA MAIS TE CHATEIO NA VIDA! PROMETO!!", "AAAAAAAAAAAAAAAA!!!!!!!!!", "Ah, obrigado.", "Eu dou-te dinheiro, fama, TUDO! POR FAVOR NÃO ME MATES!!!", "Não me mates! Quem é que vai dar comida ao meu cão???","Já não tinha amigos mesmo." };
	string nomes[10] = { "Joaquim Costa", "Fernando Anastácio", "Beatriz Sousa", "Mateus Silvestre", "Afonso Pacheco", "Cauã Galliac", "Bruno Silva", "Carlos Miguel", "Afonso Santo", "Rodrigo Galante"};

	for (i = 0; i < 6; ++i)
	{
		vitimas[i] = rand() % 10;
	}
	cout << "Olá. Eu quero jogar um jogo.\n";
	cin.ignore();
	system("cls");
	
	do
	{
		cout << " ";
		system("cls");
		++j
	} while (j < 20);
	


	return 0;
}