/*Ler um vetor B de 9 elementos (reserve memória para 10 elementos), um valor X e um valor P que representa
uma posição dentro do vetor (validar o valor P aceitando apenas valores válidos de 0 a 8). Incluir o valor X na
posição P do vetor B fazendo com que os elementos existentes dentro do vetor (da posição em diante) sejam
deslocados de uma posição para o final. Logo após o processamento, mostrar o vetor B. */

#include <iostream>
using namespace std;

int main()
{
    int vetorB[10], x, p;

    for (int i = 0; i < 9; i++)
    {
        cout << "informe os valores do vetor B: " << endl;
        cin >> vetorB[i];
    }

    cout << "digite o valor de X (valor do elemento) : " << endl;
    cin >> x;

    do
    {
        cout << "informe o valor P de 1 à 9 (posição do elemento X dentro do vetor B): " << endl;
        cin >> p;

        if (p < 1 || p > 9)
        {
            cout << "posição inválida, por favor digitar uma posição de 0 a 8 do vetor" << endl;
        }
    } while (p < 0 || p > 8);

    p = p - 1;

    cout << "vetor B: ";
    for (int i = 0; i < 9; i++)
    {
        cout << "[" << vetorB[i] << "]";
    }
    cout << endl;

    for (int i = 8; i >= p; i--)
    {
        vetorB[i + 1] = vetorB[i];
    }

    vetorB[p] = x;

    cout << "vetor B resultante: ";
    for (int i = 0; i < 10; i++)
    {
        cout << "[" << vetorB[i] << "]";
    }

    return 0;
}