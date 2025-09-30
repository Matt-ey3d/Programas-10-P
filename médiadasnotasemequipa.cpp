/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
int P,I,M,F,media;

std::cout<<"Insere a nota de Matemática: ";
std::cin>>M;
std::cout<<"Insere a nota de Inglês: ";
std::cin>>I;
std::cout<<"Insere a nota de Português: ";
std::cin>>P;
std::cout<<"Insere a nota de Físico-Química: ";
std::cin>>F;

media=(P+I+M+F)/4;
std::cout<<"A média das tuas notas é "<<media<<" :D";

    return 0;
}