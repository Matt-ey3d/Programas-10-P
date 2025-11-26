/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
using namespace std;
float nota;

cout<<"Escreve aqui a tua nota:\n";
cin>>nota;

if(nota>9.5){
cout<<"Parabéns! Passaste :D";
}else{
cout<<"Chumbaste :[";
}
return 0;
}
