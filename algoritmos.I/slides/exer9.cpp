/*• Preencher uma matriz de ordem 4,
com valores inteiros;
• Apresentar a soma dos valores da
diagonal principal;
• Apresentar o produto dos valores
da 3º linha;
• Apresentar o maior valor da 2º
coluna*/

#include <iostream>

using namespace std;

int main()
{

    int matriz[4][4], soma = 0, l, c;
    int multi = 1;
    int maior;

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << "informe os valores da matriz 4x4: " << endl;
            cin >> matriz[l][c];
            if (l == c)
            {
                soma += matriz[l][c];
            }
        }
    }

    maior = matriz[0][1];

    for (int c = 0; c < 4; c++)
    {
        multi *= matriz[2][c];
    }

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {

            if (matriz[l][1] > maior)
            {
                maior = matriz[l][1];
            }
        }
    }

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << "[" << matriz[l][c] << "]";
        }

        cout << endl;
    }

    cout << "a soma dos valores da diagonal principal é igual a: " << soma << " " << endl;
    cout << "O produto dos valores da terceira linha é igual a: " << multi << " " << endl;
    cout << "o maior valor da segunda coluna é igual a: " << maior;

    return 0;
}