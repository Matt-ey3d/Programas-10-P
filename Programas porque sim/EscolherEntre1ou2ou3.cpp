/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
int num;

std::cout<<"Escolha entre 1, 2 ou 3\n";
std::cin>>num;

if (num!=1&&num!=2&&num!=3) {
std::cout<<"Não sabe seguir instruções básicas. Vá para o caralho.";
} else if (num==1) {
std::cout<<"Escolheu o número 1! Parabéns :D!!!";
} else if (num==2) {
std::cout<<"Escolheu o número 2! Muito bem :D!!!";
} else {
std::cout<<"Escolheu o número 3! Fantástico :D!!!";
}
return 0;
}