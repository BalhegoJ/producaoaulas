/*Desenvolver um programa que gere uma matriz MxN (1 ≤ M,N ≤ 5) de valores inteiros. Os valores M e N são
fornecidos pelo usuário. Os valores inteiros devem ser gerados aleatoriamente e estar no intervalo [0,10]. A
partir desta matriz, faça:
a) Calcule a soma de todos os seus elementos ímpares.
b) Mostre as coordenadas (linha x coluna) do maior e do menor elemento.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int i, j, m, n;
    int valores;
    int somaimpar = 0, maior = 0, menor = 11, p, q, r, s;

    do
    {

        cout << "informe a quantidade de linhas da matriz que você deseja : " << endl;
        cin >> m;
        cout << "informe a quantidade de colunas da matriz que você deseja :" << endl;
        cin >> n;
    } while (m <= 1 || m > 5 || n <= 1 || n > 5);

    int matriz[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            valores = rand() % 11; // 0 1 2 3 4 5 6 7 8 9 10
            matriz[i][j] = valores;

            if (valores % 2 == 1)
            {
                somaimpar += valores;
            }
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                p = i;
                q = j;
            }

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                r = i;
                s = j;
            }
        }
        cout << endl;
    }

    cout << "soma dos elementos impares: " << somaimpar << endl;
    cout << "A cordenada do maior número é: " << p+1 << "x" << q+1 << endl;
    cout << "A cordenada do menor número é: " << r+1 << "x" << s+1 << endl;

    return 0;
}