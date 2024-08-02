/*4. Faça um algoritmo que leia uma matriz AnXm (1 ≤ n ≤ 15, 1 ≤ m ≤ 25) de números reais e:
1. gere uma matriz B que seja a matriz transposta de A;
2. verifique se a matriz A é simétrica (uma matriz é simétrica quando é quadrada e quando
aji = aij). */

#include <iostream>
using namespace std;

int main()
{

    int l, c;

    do
    {
        cout << "informe a quantidade de linhas da matriz entre 2 e 15: " << endl;
        cin >> l;
        cout << "informe a quantidade de colunas da matriz entre 2 e 25: " << endl;
        cin >> c;
    } while (l <= 1 || l > 15 || c <= 1 || c > 25);

    double matriz[l][c], trasposta[l][c];
    int i, j;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "informe os valores (reais) da matriz: " << endl;
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        for (int k = 0; k < c; k++)
        {
            trasposta[k][i] = matriz[i][k];
        }
        
        matriz[l][c] = matriz[i][j];

        cout << endl;
    }


    cout << endl << "matriz B transposta: " << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "[" << matriz[j][i] << "]";
        }
        cout << endl;
    }

    cout << endl;

    if (l == c && matriz[l][c] == trasposta[l][c])
    {
        cout << "matriz simetrica.";
    }
    return 0;
}