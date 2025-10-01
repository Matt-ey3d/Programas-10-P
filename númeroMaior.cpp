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
int A,B,C;
cout<<"Escreve um número:\n";
cin>>A;
cout<<"Escreve outro número:\n";
cin>>B;
cout<<"Escreve mais um número:\n";
cin>>C;

if(A>B && A>C){
    cout<<A<<" é o número maior!";
}else if(B>C){
    cout<<B<<" é o número maior!";
}else{
    cout<<C<<" é o número maior!";
}
    return 0;
}