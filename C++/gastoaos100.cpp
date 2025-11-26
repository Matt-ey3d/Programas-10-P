/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()

{
    int KmI,KmF,gasolina,gastoaos100;
    std::cout<<"Por favor, insira os quilómetros iniciais: ";
    std::cin>>KmI;
    std::cout<<"Agora, insira os quilómetros finais: ";
    std::cin>>KmF;
    std::cout<<"Finalmente, insira a gasolina gasta (em litros): ";
    std::cin>>gasolina;
    gastoaos100=(100*gasolina)/(KmF-KmI);
    std::cout<<"A gasolina que o seu veículo gasta aos 100Km é "<<gastoaos100<<" litros :D";

    return 0;
}
