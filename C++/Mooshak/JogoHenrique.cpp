#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
using namespace std;

long long par1=0, impar1=0, par2=0, impar2=0, N, M, i;
bool onde = false;

void parOUimpar(int n)
{
    if (onde==false)
    {
        if (n % 2 == 0)
        {
            ++par1;
        }
        else
        {
            ++impar1;
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            ++par2;
        }
        else
        {
            ++impar2;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    long long baralhoN, baralhoM, par = 0, impar = 0;

    cin >> N;
    for (i = 0; i < N; ++i)
    {
        cin >> baralhoN;
        parOUimpar(baralhoN);
    }
    onde = true;
    cin >> M;
    for (i = 0; i < M; ++i)
    {
        cin >> baralhoM;
        parOUimpar(baralhoM);
    }
    par += par1 * par2;
    par += impar1 * impar2;
    impar += par1 * impar2;
    impar += par2 * impar1;

    cout << par << " " << impar << endl;

    return 0;
}