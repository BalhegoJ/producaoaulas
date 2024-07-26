/*Diz-se que uma matriz quadrada A de ordem n de valores inteiros é uma matriz de permutação se em cada
linha e em cada coluna houver n-1 elementos nulos e um único elemento igual a 1.

matriz abaixo de permutação                 matriz abaixo de não permutação
      | 0 1 0 0 |                                  | 2 -1  0 |
      | 0 0 1 0 |                                  |-1  2  0 |
      | 1 0 0 0 |                                  | 0  0  1 |
      | 0 0 0 1 |

Ler uma matriz Anxn (1 ≤  n ≤ 10) de valores inteiros e verificar se ela é (ou não) uma matriz de permutação. */

#include <iostream>
using namespace std;

int main()
{

    int n, izero = 0, ium = 0;
  

    do

    {
        cout << "Informe o tamanho da ordem da matriz quadrada: " << endl;
        cin >> n;
    } while (n <= 1 || n > 10);

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Informe os valores da matriz: ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    bool matrizP = true;

    for (int i = 0; i < n; i++)
    {
        izero = 0;
        ium = 0;

        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == 0)
            {
                izero += 1;
            }
            else if (matriz[i][j] == 1)
            {
                ium += 1;
            }
        }
    }
    if (izero != n - 1 || ium != 1)
    {
        matrizP = false;
       
    }

    for (int j = 0; j < n; j++)
    {
        izero = 0;
        ium = 0;

        for (int i = 0; i < n; i++)
        {
            if (matriz[i][j] == 0)
            {
                izero += 1;
            }
            else if (matriz[i][j] == 1)
            {
                ium += 1;
            }
        }
        if (izero != n - 1 || ium != 1)
        {
            matrizP = false;
            break;
        }
    }

    if (matrizP)
    {
        cout << "A matriz é uma matriz de permutacao." << endl;
    }
    else
    {
        cout << "A matriz nao é uma matriz de permutacao." << endl;
    }

    return 0;
}
