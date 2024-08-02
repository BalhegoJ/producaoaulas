/*ler uma matriz 3x3 de valores inteiros, na saída apresentar um "*" ao lado
 dos numeros impares e apresentar o total de numeros ímpares e da matriz*/

#include <iostream>

using namespace std;

int main()
{

    int matriz[3][3], qtd = 0;

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "informe os valores da matriz 3x3 :" << endl;
            cin >> matriz[l][c];

            if (matriz[l][c] % 2 == 1)
            {
                qtd += 1;
            }
        }
    }

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (matriz[l][c] % 2 == 1)
            {
                cout << "[" << matriz[l][c] << "*" << "]";
            }

            else
            {

                cout << "[" << matriz[l][c] << "]";
            }
        }
        cout << endl;
    }

    cout << "quantidade de numeros impares: " << qtd;

    return 0;
}