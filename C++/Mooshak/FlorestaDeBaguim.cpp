#include <iostream>
#include <locale>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int N, K, i, ii, Aux;
    string Floresta;
    bool Conseguiu = false;
    cin >> N >> K;

    for (i = 0; i < N; i++)
    {
        cin >> Floresta;
        Aux = 0;
        for (ii = 0; ii < N; ii++)
        {
            if (Floresta[ii] == '.')
            {
                Aux++;
                if (Aux >= K)
                {
                    Conseguiu = true;
                }
            }
            else
            {
                Aux = 0;
            }
        }

    }
    cout << Conseguiu << endl;
    return 0;
}