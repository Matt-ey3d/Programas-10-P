#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

using namespace std;

int depósito(int saldo)
{
	int pôrDinheiro;
	string comentarRiqueza[4] = { "Como queira, Tio Patinhas!","A nadar em dinheiro, ahn?","Quantos avós é que o utilizador tem?","Bill Gates? É você?" };

	srand(time(0));

	cout << "Bem-vindo ao menu de depósito de bitcoins.\nQuandos bitcoins quer depositar?\n";
	cin >> pôrDinheiro;
	saldo += pôrDinheiro;
	cout << "\nDepósito realizado com êxito!\nAgora tem " << saldo << " BTC\n\n";
	if (pôrDinheiro > 2000)
	{
		cout << comentarRiqueza[rand() % 3] << endl;
	}
	system("pause");
	return saldo;
}

int débito(int saldo)
{
	int tirarDinheiro;

	cout << "Bem-vindo ao menu de débito de bitcoins.\nQuandos bitcoins quer retirar?\n";
	cin >> tirarDinheiro;
	if (saldo - tirarDinheiro<0)
	{
		cout << "Infelizmente, se eu realizasse este débito, o utilizador ficaria em dívida para com o banco\nE assim despedir-me-iam\n\nO utilizador só tem " << saldo << " BTC\n\n";
	}
	else
	{
		saldo -= tirarDinheiro;
		cout << "\nDébito realizado com êxito!\nAgora tem " << saldo << " BTC\n\n";
	}
	system("pause");
	return saldo;
}

void verificarSaldo(int saldo)
{
	cout << "Bem-vindo ao menu em que se verifica o saldo do utilizador\nVou agora verificar o saldo do utilizador\n";
	system("pause");
	cout << "O saldo do utilizador é " << saldo << " BTC\nO saldo está verificado\n";
	system("pause");
}

int enviarDinheiro(int saldo)
{
	int enviarDinheiro;
	string destinatário;

	cout << "Bem-vindo ao menu de envio de bitcoins.\nQuem é o destinatário?\n";
	cin >> destinatário;
	cout << "Quandos bitcoins quer enviar?\n";
	cin >> enviarDinheiro;
	if (saldo - enviarDinheiro < 0)
	{
		cout << "Infelizmente, o utilizador não é assim tão rico\nNão é possível realizar esta transação\n\nO utilizador só tem " << saldo << " BTC\n\n";
	}
	else
	{
		saldo -= enviarDinheiro;
		cout << "\nEnvio para o utilizador "<<destinatário<<" realizado com êxito!\nAgora tem " << saldo << " BTC\n\n";
	}
	system("pause");
	return saldo;
}

void iniciarEcrã(int saldo=1000)
{
	int menu;

	do
	{
		system("cls");
		cout << "Bem-vind@ à sua conta bitcoin.\n\n[1] Depósito\n[2] Débito\n[3] Verificar Saldo\n[4] Enviar dinheiro para outra conta\n[5] Sair\n";
		cout << "\n   Insira uma das opções acima: ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			system("cls");
			saldo = depósito(saldo);
			iniciarEcrã(saldo);
			break;

		case 2:
			system("cls");
			saldo = débito(saldo);
			iniciarEcrã(saldo);
			break;

		case 3:
			system("cls");
			verificarSaldo(saldo);
			iniciarEcrã(saldo);
			break;

		case 4:
			system("cls");
			saldo = enviarDinheiro(saldo);
			iniciarEcrã(saldo);
			break;

		case 5:
			system("cls");
			break;

		default:
			cout << "\n\nNúmero inválido\n";
			cout << "Eu chamar-lhe-ia uns nomes feios, mas o utilizador, com esse encéfalo de batata que não entende que não há uma opção com o número «" << menu << "», não os entenderia\n";
			cout << "Para além de que ficar calado é melhor do que tentar falar com uma batata\n";
			system("pause");
		}
	} while (menu < 1 || menu > 5);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int saldo = 1000;
	iniciarEcrã(saldo);
	return 0;
}
	
