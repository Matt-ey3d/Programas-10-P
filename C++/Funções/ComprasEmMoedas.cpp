#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

using namespace std;

int i, troco_teste, distribuição[8];

int verificarMoneyDado(int moeda) //transformar, em cêntimos, o dinheiro dado pelo cliente
{
	int pagamento = 0; //pagamento (em cêntimos)

	//Afonso Espanhol sugere fazer outro array em vez do switch case

	switch (i)
	{
	case 0:
		pagamento += moeda * 200;
		break;
	case 1:
		pagamento += moeda * 100;
		break;
	case 2:
		pagamento += moeda * 50;
		break;
	case 3:
		pagamento += moeda * 20;
		break;
	case 4:
		pagamento += moeda * 10;
		break;
	case 5:
		pagamento += moeda * 5;
		break;
	case 6:
		pagamento += moeda * 2;
		break;
	case 7:
		pagamento += moeda * 1;
		break;
	}
	return pagamento;
}

int vendaFeita()
{
	if (troco_teste < 0)
	{
		for (i = 0; i < 7; ++i)
		{
			cout << distribuição[i] << " ";
		}
	}
}

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int E, C, troco[8], preço, pagamento = 0; //euros, cêntimos, moedas dadas, moedas recebidas, preço do artigo (em cêntimos)

	cin >> E >> C;
	preço = (E * 100) + C;
	for (i = 0; i < 7; ++i)
	{
		cin >> distribuição[i];
		pagamento+=verificarMoneyDado(distribuição[i]);
	}
	troco_teste = pagamento - preço;
	vendaFeita();
}