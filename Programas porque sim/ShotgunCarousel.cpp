#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int vitimas[6] = {}, i, j, teimoso = 0;
	string OK;
	auto inicio = steady_clock::now();
	auto tempo = seconds(13);
	string falas[10] = {
		"EU TENHO UMA FAMÍLIA!",//1
		"Pressiona o botão! PRESSIONA O BOTÃO!!",//2
		"Por favor deixa-me viver!!!",//3
		"...",//4
		"NUNCA MAIS TE CHATEIO NA VIDA! PROMETO!!",//5
		"AAAAAAAAAAAAAAAA!!!!!!!!!",//6
		"Ah, muito obrigado.",//7
		"Eu dou-te dinheiro, fama, TUDO! POR FAVOR NÃO ME MATES!!!",//8
		"Não me mates! Quem é que vai dar comida ao meu cão???",//9
		"Já não tinha amigos mesmo."//10
	};
	string pessoas[10] = {
		"Joaquim Costa",//1
		"Fernando Anastácio",//2
		"Beatriz Sousa",//3
		"Mateus Silvestre",//4
		"Afonso Pacheco",//5
		"Cauã Galliac",//6
		"Bruno Silva",//7
		"Carlos Miguel",//8
		"Afonso Santo",//9
		"Rodrigo Galante"//10
	};


	for (i = 0; i < 6; ++i)
	{
		vitimas[i] = rand() % 10;
		for (j = 0; j < i; ++j)
		{
			if (vitimas[i] == vitimas[j])
			{
				--i;
			}
		}
	}


	cout << "Olá. Eu quero jogar um jogo." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");
	
	for (i = 0; i < 4; ++i)
	{
		cout << "  \ O /  " << endl;
		cout << " O \ / O " << endl;
		cout << "----*----" << endl;
		cout << " O / \ O " << endl;
		cout << "  / O \  " << endl;
		Sleep(300);
		system("cls");
		cout << " O  |  O " << endl;
		cout << "___ | ___" << endl;
		cout << " O \*/ O " << endl;
		cout << "___/|\___" << endl;
		cout << " O  |  O " << endl;
		Sleep(300);
		system("cls");
	}

	cout << "Esta coisa esquisita que acabou de aparecer no teu ecrã era suposto ser um carrosel." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");
	cout << "Todas as vezes que jogas um jogo, tens sempre a opção de matar ou deixar viver o monstro à tua frente." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");
	cout << "Todas as vezes que jogas um jogo, tens sempre a opção de matar ou deixar viver o monstro à tua frente." << endl;
	cout << "Agora terás de escolher, de entre os teus amigos, quem matas e quem deixas viver." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");
	cout << "6 dos teus amigos estão presos no carrosel," << endl;
	Sleep(1500);
	cout << "mas apenas 3 podem sair." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	for (i = 0; i < 4; ++i)
	{
		cout << "  \ O /  " << endl;
		cout << " O \ / O " << endl;
		cout << "----*----" << endl;
		cout << " O / \ O " << endl;
		cout << "  / O \  " << endl;
		cout << endl << "Lembra-te que eles não são os monstros dos jogos;" << endl;
		Sleep(300);
		system("cls");
		cout << " O  |  O " << endl;
		cout << "___ | ___" << endl;
		cout << "O  \*/  O" << endl;
		cout << "___/|\___" << endl;
		cout << " O  |  O " << endl;
		cout << endl << "Lembra-te que eles não são os monstros dos jogos;" << endl;
		Sleep(300);
		system("cls");
	}
	for (i = 0; i < 5; ++i)
	{
		cout << "  \ O /  " << endl;
		cout << " O \ / O " << endl;
		cout << "----*----" << endl;
		cout << " O / \ O " << endl;
		cout << "  / O \  " << endl;
		cout << endl << "Lembra-te que eles não são os monstros dos jogos;" << endl;
		cout << "aquilo que tu escolheres vai ter consequências." << endl;
		Sleep(300);
		system("cls");
		cout << " O  |  O " << endl;
		cout << "___ | ___" << endl;
		cout << "O  \*/  O" << endl;
		cout << "___/|\___" << endl;
		cout << " O  |  O " << endl;
		cout << endl << "Lembra-te que eles não são os monstros dos jogos;" << endl;
		cout << "aquilo que tu escolheres vai ter consequências." << endl;
		Sleep(300);
		system("cls");
	}

	cout << "Tens 15 segundos para salvares cada um." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");
	cout << "Tens 13 segundos para salvares cada um." << endl;
	cout << "QUE O JOGO COMECE." << endl;
	Sleep(1000);
	do
	{
		if (teimoso > 2)
		{
			cout << "\33[31m";
		}
		cout << "(COMEÇAR? [«ok»])" << endl;
		cin >> OK;
		++teimoso;
		if (teimoso > 5 && teimoso < 10 && OK != "ok")
		{
			for (i = 0; i < 67; ++i)
			{
				cout << "COVARDE" << endl;
				Sleep(5);
			}
		}
		if (teimoso > 9 && OK != "ok" )
		{
			for (i = 0; i < 67; ++i)
			{
				for (j = 0; j < 101; ++j)
				{
					cout << "COVARDE ";
				}
				cout << endl;
			}
		}
	} while (OK != "ok");

	system("cls");

	cout << "\33[0m";

	for (i = 0; i < 6; ++i)
	{
		for (j = 0; j < 6; ++j)
		{
			cout << "A GIRAR..." << endl;
			cout << "  \ O /  " << endl;
			cout << " O \ / O " << endl;
			cout << "----*----" << endl;
			cout << " O / \ O " << endl;
			cout << "  / O \  " << endl;
			Sleep(300);
			system("cls");
			cout << "A GIRAR..." << endl;
			cout << " O  |  O " << endl;
			cout << "___ | ___" << endl;
			cout << "O  \*/  O" << endl;
			cout << "___/|\___" << endl;
			cout << " O  |  O " << endl;
			Sleep(300);
			system("cls");
		}
		cout << endl;
		cout << "  \ O /  " << endl;
		cout << " O \ / O " << endl;
		cout << "----*----" << endl;
		cout << " O / \ O " << endl;
		cout << "  / \33[31mO\33[0m \  " << endl;
		Sleep(1000);
		system("cls");

		while (steady_clock::now() - inicio < tempo);
		{
			for (j = 13; j > 0; --j)
			{
				cout << pessoas[vitimas[i]] << endl << "«" << falas[vitimas[i]] << "»" << endl;
				cout << j;
				Sleep(1000);
				system("cls");
			}
			if (cin.ignore())
			{
				break;
			}
		}
	}
	return 0;
}