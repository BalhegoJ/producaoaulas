/*Faça um algoritmo que leia um vetor V com n (n ≤ 15) número inteiros. Determine o menor e o maior
elemento do vetor. */

#include <iostream>

using namespace std;

int main()
{

    int x;

    do
    {
        cout << "escreva o tamanho do vetor: ";
        cin >> x;
        cout << endl;
    } while (x > 15 || x < 1);

    int vetorV[x];
    int maior = 0;
    int menor = 999999999;

    for (int i = 0; i < x; i++)
    {

        cout << "Digite um valor inteiro e positivo : " << endl;
        cin >> vetorV[i];

        if (vetorV[i] > maior)
        {
            maior = vetorV[i];
        }

        if (vetorV[i] < menor)
        {
            menor = vetorV[i];
        }
    }

    cout << "maior elemento: " << maior << endl;
    cout << "menor elemento: " << menor << endl;

    return 0;
}