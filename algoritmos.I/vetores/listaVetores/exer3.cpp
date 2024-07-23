/*Faça um algoritmo que leia dois vetores V e W com n (n ≤ 15) números reais. Determine os vetores
resultantes da soma de V e W, da subtração de V e W, da multiplicação de V e W, da divisão de V e W,
elemento a elemento. Determine também o produto escalar de V e W, definido como: Σ (Vi * Wi) = V1 *
W1  + V2 * W2 + ...+ Vn* Wn. Caso o produto escalar seja igual a zero, os vetores são classificados como
ORTOGONAIS. */

#include <iostream>

using namespace std;

int main()
{

    int x;
    double esc = 0;

    do
    {
        cout << "informe o valor n (n <= 15) de vetores: " << endl;
        cin >> x;
    } while (x > 15 || x < 1);

    double vetorV[x], vetorW[x];
    double vetorS[x], vetorsub[x], vetormulti[x], vetordiv[x];

    for (int i = 0; i < x; i++)
    {
        cout << "informe os valores para o Vetor V : " << endl;
        cin >> vetorV[i];
        cout << "informe os valores para o Vetor W : " << endl;
        cin >> vetorW[i];

        esc += vetorV[i] * vetorW[i];

        vetorS[i] = vetorV[i] + vetorW[i];

        vetorsub[i] = vetorV[i] - vetorW[i];

        vetormulti[i] = vetorV[i] * vetorW[i];

        if (vetorV[i] == 0 || vetorW[i] == 0)
        {
            vetordiv[i] = 0;
        }
        else
        {
            vetordiv[i] = vetorV[i] / vetorW[i];
        }
    }

    for (int i = 0; i < x; i++)
    {
        cout << endl;

        cout << i + 1 << " posição do Vetor soma: " << vetorS[i] << endl;
        cout << endl;
        cout << i + 1 << " posição do Vetor subtração: " << vetorsub[i] << endl;
        cout << endl;
        cout << i + 1 << " posição do Vetor multiplicação: " << vetormulti[i] << endl;
        cout << endl;
        cout << i + 1 << " posição do Vetor divisão: " << vetordiv[i] << endl;
        cout << endl;
        cout << "--------------------------------------------" << endl;
    }
    if (esc == 0)
    {
        cout << "produto escalar Ortogonal." << endl;
    }

    else
    {
        cout << "produto escalar dos vetores: " << esc << endl;
    }

    return 0;
}