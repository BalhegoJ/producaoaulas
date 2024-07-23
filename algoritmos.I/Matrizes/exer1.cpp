/*1. Escreva um algoritmo que, para uma matriz quadrada AnXn (1 ≤ n ≤ 10) de inteiros, faça:
1. leia a matriz
2. some os elementos da 2a coluna
3. multiplique os elementos de cada linha e armazene-os em um vetor
4. some todos os elementos da matriz
5. some os elementos da diagonal principal
6. permute os elementos das linhas p e q */

#include <iostream>
using namespace std;

int main()
{

    int x, soma = 0, somat = 0, somad = 0;

    do
    {

        cout << "defina o tamanho da matriz quadrada entre 2 e 10: " << endl;
        cin >> x;

    } while (x <= 1 || x > 10);

    int matriz[x][x], l, c;

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {

            cout << "informe os valores da matriz " << x << "x" << x << ":" << endl;
            cin >> matriz[l][c];
        }
        cout << endl;
    }

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {
            cout << "[" << matriz[l][c] << "]";
        }
        cout << endl;
    }

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {
            if (c == 1)
            {
                soma += matriz[l][c];
            }
        }
        cout << endl;
    }

    cout << "soma dos elementos da segunda coluna da matriz: " << soma << endl;
    cout << "multiplicação das linhas armazenadas em um vetor: ";

    int vetmulti[x];

    for (int l = 0; l < x; l++)
    {
        int multi = 1;

        for (int c = 0; c < x; c++)
        {
            multi *= matriz[l][c];
        }

        vetmulti[l] = multi;

        cout << "[" << vetmulti[l] << "]";
    }

    cout << endl;

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {
            somat += matriz[l][c];
        }
    }

    cout << "soma dos elementos da matriz: " << somat << endl;

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {
            if (l == c)
            {
                somad += matriz[l][c];
            }
        }
    }

    cout << "soma dos elementos da diagonal principal: " << somad << endl;

    return 0;
}
