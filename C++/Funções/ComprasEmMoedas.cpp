#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

using namespace std;

int i, distribuição[8], multiplicadores[8] = { 200, 100, 50, 20, 10, 5, 2, 1 }, preço, pagamento = 0; /*
	"i" para loops, moedas dadas, multiplicadores de cada moeda (200 para moedas de 2 euros, 100 para moedas de 1 euro, 50 para moedas de 50 cêntimos, etc.),
preço da compra e pagamento do cliente em cêntimos
*/

int transformarMoneyDado(int moeda) //transformar, em cêntimos, o dinheiro dado pelo cliente
{
	return moeda * multiplicadores[i];
}

void vendaFeita() //verificar se a venda foi efetuada
{
	int troco[8] = { 0 }, resto;

	resto = pagamento - preço;
	if (resto < 0) //se o dinheiro não chegar para a compra
	{
		for (i = 0; i < 8; ++i)
		{
			cout << distribuição[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (i = 0; i < 8; ++i)
		{
			if (resto >= multiplicadores[i]) //se o preço chegar para a moeda em multiplicadores[i]
			{
				++troco[i]; //mais 1 moeda para o seu lugar respetivo
				resto -= multiplicadores[i]; //retira-se o dinheiro do troco ao preço
				--i; //volta a repetir para verificar se é preciso mais moedas do mesmo tipo
			}
		}
		for (i = 0; i < 8; ++i)
		{
			cout << troco[i] << " ";
		}
		cout << endl;
	}
}

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int E, C; //euros, cêntimos, moedas dadas, moedas recebidas, preço do artigo (em cêntimos)

	cin >> E >> C;
	preço = (E * 100) + C; //preço da compra em cêntimos
	for (i = 0; i < 8; ++i)
	{
		cin >> distribuição[i]; //ler moedas
		pagamento += transformarMoneyDado(distribuição[i]); //adicionar cada moeda ao pagamento, em cêntimos, em forma de função
	}
	vendaFeita(); //verificar se a venda pode ser feita e efetuá-la
}