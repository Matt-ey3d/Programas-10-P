#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

int contador = 0;
int Div, num;

cout<<"Escreva um número\n";
cout<<"E eu digo se é primo ou composto\n";
cin>>num;

if (num == 0 || num == 1)
{
    cout<<"O número que introduziu não é primo,\n";
    cout<<"Mas eu não sei dizer o que é ._.\n";
}
else
{
Div = num;

    do
    {
        if (num % Div == 0)
        {
        ++contador;
        }
        --Div;
    } while (Div != 0);
    
if (contador > 2)
{
    cout<<"O número que introduziu é composto\n";
}
else
{
    cout<<"O número que introduziu é primo\n";
}
    
}


    return 0;
}
