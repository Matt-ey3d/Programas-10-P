/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
	int horas;

	std::cout<<"Olá! pessoa! Diz-me as horas\n";
	std::cout<<"(não faz mal, não preciso dos minutos)\n";
	std::cin>>horas;

	if (horas<=7) {
		std::cout<<"Tu preocupas-me o_o\n";
		std::cout<<"Vai dormir";
	} else if (horas<=12) {
		std::cout<<"Bom dia!";
	} else if (horas<=19) {
		std::cout<<"Boa tarde!";
	} else {
		std::cout<<"Boa noite!";
	}

	return 0;
}
