#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int qsandes, qbolo, qrefrigerante, qcafe;
	double lucro, pvsandes, pvbolo, pvrefrigerante, pvcafe, sandes=1, bolo=0.8, refrigerante=1.5, cafe=0.6;

	cout << "Por favor diga quantas sandes vendeu:\n";
	cin >> qsandes;
	cout << "E a que preço vendeu cada um (em euros):\n";
	cin >> pvsandes;
	cout << "Agora diga quantos bolos vendeu:\n";
	cin >> qbolo;
	cout << "E a que preço vendeu cada um (em euros):\n";
	cin >> pvbolo;
	cout << "A seguir, diga quantos refrigerantes vendeu:\n";
	cin >> qrefrigerante;
	cout << "E a que preço vendeu cada um (em euros):\n";
	cin >> pvrefrigerante;
	cout << "Finalmente, diga quantos cafés vendeu:\n";
	cin >> qcafe;
	cout << "E a que preço vendeu cada um (em euros):\n";
	cin >> pvcafe;

	lucro = ((pvsandes - sandes) * qsandes) + ((pvbolo - bolo) * qbolo) + ((pvrefrigerante - refrigerante) * qrefrigerante) + ((pvcafe - cafe) * qcafe);

	cout<<"O seu lucro hoje foi\n"<<lucro<<" euros\n";

	return 0;
}