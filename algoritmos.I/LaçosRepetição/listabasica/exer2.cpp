/*Faça um contador cujo valor limite seja informado pelo usuário e escreva os
valores da contagem na tela. */

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "informe um numero limite para o contador :" << endl;
    cin >> num;
    if (num > 0)
    {
        for (int i = 0; i <= num; i++)
        {
            cout << i << " ";
        }
    }
    if (num < 0)
    {
         for (int i = num; i <= 0; i++)
        {
            cout << i << " ";
        }
    }
    return 0;
}