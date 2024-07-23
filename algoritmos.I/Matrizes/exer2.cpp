/*Faça um algoritmo que leia uma matriz AnXm (1 ≤ n ≤ 15, 1 ≤ m ≤ 25) de números inteiros e
calcule o vetor resultante da soma dos elementos de cada linha da matriz. */

#include <iostream>
using namespace std;

int main()
{
    int l, c;

    do
    {
        cout << "defina a quantidade de linhas da matriz entre 2 e 15 : " << endl;
        cin >> l;
        cout << "defina a quantidade de colunas da matriz entre 2 e 25: " << endl;
        cin >> c;

    } while (l <= 1 || l > 15 || c <= 1 || c > 25);

    int matriz[l][c], somalinha[l];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "informe os valores da matriz: " << l << "x" << c << endl;
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < l; i++)
    {
        somalinha[i] = 0;

        for (int j = 0; j < c; j++)
        {
            somalinha[i] += matriz[i][j];
        }
    }

    cout << "vetor resultante das somas das linhas: ";

    for (int i = 0; i < l; i++)
    {
        cout << "[" << somalinha[i] << "]";
    }

    return 0;
}