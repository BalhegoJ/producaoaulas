/*. Desenvolva um algoritmo que leia n (1 ≤ n ≤ 10) números inteiros e armazene-os no vetor X. Realize
um processo que troque a disposição dos elementos do vetor X de forma que o primeiro elemento seja
trocado com o último, o segundo seja trocado com o penúltimo e assim sucessivamente. Mostre os
elementos do vetor X após este processo. Não utilizar vetor auxiliar. */

#include <iostream>

using namespace std;

int main()
{
    int n = 0, Vaux;

    do
    {
        cout << "informe o tamanho do vetor X maior ou igual a 1 e menor ou igual a 10: " << endl;
        cin >> n;

    } while (n <= 1 || n > 10);

    int Vetx[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "informe os valores: " << endl;
        cin >> Vetx[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "[" << Vetx[i] << "]";
    }

    cout << endl;
    cout << "disposição dos elementos trocadas " << endl;
    
    for (int i = 0; i < n / 2; i++)
    {
        Vaux = Vetx[i];
        Vetx[i] = Vetx[n - 1 - i];
        Vetx[n - 1 - i] = Vaux;
    }

    for (int i = 0; i < n; i++)
    {

        cout << "[" << Vetx[i] << "]";
    }

    return 0;
}