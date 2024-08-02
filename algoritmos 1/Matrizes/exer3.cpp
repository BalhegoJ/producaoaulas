/*3. Elabore um algoritmo que inicialize de forma otimizada a matriz AnXn (1 ≤ n ≤ 10) desta forma:
Ou seja, valores acima da diagonal serão 2,
abaixo da diagonal serão 0, da diagonal
serão 1, com exceção das pontas (que serão
10 e 20).
Não faça declaração com inicialização direta.
Utilize laços.*/

#include <iostream>
using namespace std;

int main()
{

    int x;

    do
    {

        cout << "iforme a quantidade o tamanho da matriz quadrada de ordem 2 até 10: ";
        cin >> x;

    } while (x <= 1 || x > 10);

    int matriz[x][x];

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {
            if (l < c)
            {
                matriz[l][c] = 2;
            }

            if (c < l)
            {
                matriz[l][c] = 0;
            }

            if (l == c)
            {
                matriz[l][c] = 1;
            }

            matriz[0][0] = 10;
            matriz[x - 1][x - 1] = 20;
        }
    }

    for (int l = 0; l < x; l++)
    {
        for (int c = 0; c < x; c++)
        {
            cout << "[" << matriz[l][c] << "]";
        }
        cout << endl;
    }

    return 0;
}