/*3. Faça um algoritmo que leia n números inteiros e escreva, para cada número lido, os divisores e
quantidade de divisores.
EXEMPLO: número lido = 12
 divisores = 1, 2, 3, 4, 6, 12
 quantidade divisores = 6*/

#include <iostream>

using namespace std;

int main()
{

    int num, i = 1, qtdiv = 0;

    cout << "Digite um numero: " << endl;
    cin >> num;

    while (i <= num)
    {

        if (num % i == 0)
        {

            cout << i << endl;
            qtdiv++;
        }
        i++;
    }
    cout << "A quantidade de divisores é igual a: " << qtdiv << endl;

    return 0;
}