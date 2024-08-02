/*2. Faça um algoritmo que calcule e escreva a soma da seguinte série de 100 termos:
 S = 1 + 2 + 3 + 4 + 5 ... + 100*/

#include <iostream>

using namespace std;

int main()
{

    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {

        soma += i;
    }
    cout << soma << endl;

    return 0;
}