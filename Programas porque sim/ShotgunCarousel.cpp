#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <chrono>
#include <conio.h>
#include <thread>

using namespace std;
using namespace std::chrono;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

	int vitimas[6] = {}, i, j, teimoso = 0, salvos = 0;
	string OK;
	char salvar;
	string falas[11] = {
		"EU TENHO UMA FAMÍLIA!",//1
		"Pressiona o botão! PRESSIONA A PUTA DO BOTÃO!!",//2
		"Por favor deixa-me viver!!!",//3
		"...",//4
		"NUNCA MAIS TE CHATEIO NA VIDA! PROMETO!!",//5
		"AAAAAAAAAAAAAAAA!!!!!!!!!",//6
		"Ah, muito obrigado.",//7
		"Eu dou-te dinheiro, fama, TUDO! POR FAVOR NÃO ME MATES!!!",//8
		"Não me mates! Quem é que vai dar comida ao meu cão???",//9
		"Já não tinha amigos mesmo.",//10
		"...Faz o que quiseres."//11
	};
	string pessoas[11] = {
		"Joaquim Tavares Costa",//1
		"Fernando Manuel dos Santos Anastácio",//2
		"Beatriz Cardoso Sousa",//3
		"Mateus Bernardino Silvestre",//4
		"Afonso Rodrigues Pacheco",//5
		"Cauã Morato Bianchini Galliac",//6
		"Emanuel Bruno Arsénio da Silva",//7
		"Carlos Jardel [REDACTED] Miguel",//8
		"Afonso dos Santos Espírito Santo",//9
		"Rodrigo Henrique Ferreira Franco Neves dos Santos Galante",//10
		"Lily Bernardino Silvestre"//11
	};

	/*Carregar a tecla «Enter», apenas quando aparecer o texto "(Enter)", para passar o texto.
	Se não aparecer o texto "(Enter)", esperar; demora poucos segundos para o texto desaparecer.*/

	for (i = 0; i < 6; ++i)
	{
		vitimas[i] = rand() % 11;
		for (j = 0; j < i; ++j)
		{
			if (vitimas[i] == vitimas[j])
			{
				--i;
			}
		}
	}



	cout << "Olá." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	cout << "Olá." << endl;
	cout << "Eu quero jogar um jogo." << endl;
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
		cout << "O  \*/  O" << endl;
		cout << "___/|\___" << endl;
		cout << " O  |  O " << endl;
		Sleep(300);
		system("cls");
	}


	cout << "Esta coisa esquisita e defeituosa que acabou de aparecer no teu ecrã era suposto ser um carrosel." << endl;
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

	cout << "Há uma arma carregada à frente do lugar do carrosel que for sorteado." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	cout << "Há uma arma carregada à frente do lugar do carrosel que for sorteado." << endl;
	cout << "A arma vai sempre disparar." << endl;
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


	cout << "Tens 13 segundos para salvares cada um." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	cout << "Tens 13 segundos para salvares cada um." << endl;
	cout << "Escreve «0» cada vez que quiseres salvar alguém." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	cout << "Tens 13 segundos para salvares cada um." << endl;
	cout << "Escreve «0» cada vez que quiseres salvar alguém." << endl;
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
			for (i = 0; i < 71; ++i)
			{
				for (j = 0; j < 105; ++j)
				{
					cout << "COVARDE ";
					Sleep(2);
				}
				cout << endl;
			}
		}
	} while (OK != "ok");

	system("cls");


	cout << "\33[0m";

	for (i = 0; i < 6; ++i)
	{
		salvar = 'a';
		system("cls");
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

		auto inicio = steady_clock::now();
		cout << i + 1 << "ª pessoa:" << endl;
		cout << pessoas[vitimas[i]] << endl << "«" << falas[vitimas[i]] << "»" << endl;

		while(true)
		{
			auto agora = chrono::steady_clock::now();
			auto tempo = chrono::duration_cast<std::chrono::seconds>(agora - inicio).count();
			if (tempo >= 13)
			{
				break;
			}
			if (_kbhit())
			{
				salvar = _getch();
				break;
			}
		}

		if (salvar == '0')
		{
			if (salvos < 3)
			{
				++salvos;
				cout << "Salvaste " << pessoas[vitimas[i]] << "...\nA arma vai disparar para cima." << endl;
				Sleep(2500);
			}
			else
			{
				cout << "Já salvaste 3 pessoas. Os outros têm que morrer." << endl;
				Sleep(2500);
			}
		}
		else
		{
			cout << "A arma vai disparar..." << endl;
			Sleep(2500);
		}

		system("cls");
		cout << "\33[31mBANG!\33[0m" << endl;
		Sleep(1000);
		cout << "A arma disparou." << endl;
		Sleep(2500);
	}


	system("cls");

	cout << "..." << endl;
	Sleep(3000);
	cout << "Salvaste " << salvos << " pessoas." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	cout << "..." << endl;
	cout << "Salvaste " << salvos << " pessoas." << endl;
	cout << "Ele/a(s) agradecem-te." << endl;
	cout << "(Enter)";
	cin.ignore();
	system("cls");

	cout << "Da próxima" << endl;
	Sleep(1500);
	cout << "pensa outra vez ao matar o monstro." << endl;
	cout << "(ENTER PARA ACABAR)";
	cin.ignore();
	
	system("cls");

	return 0;
}