#include <iostream>
using namespace std;

int main()
{
    int vetorA[10], vetorB[10], contador[10] = {0};

    
    for (int i = 0; i < 10; i++)
    {
        cout << "Informar os valores do vetor: ";
        cin >> vetorA[i];
    }

    
    cout << "Impressão do vetor A: ";
    for (int i = 0; i < 10; i++)
    {
        cout << "[" << vetorA[i] << "]";
    }
    cout << endl;

    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vetorA[i] == vetorA[j])
            {
                contador[i]++;
            }
        }
    }

    int iB = 0;

   
    for (int i = 0; i < 10; i++)
    {
        if (contador[i] == 1)
        {
            vetorB[iB++] = vetorA[i];
        }
    }

    
    cout << "Impressão do vetor B: ";
    for (int i = 0; i < iB; i++)
    {
        cout << "[" << vetorB[i] << "]";
    }
    cout << endl;

    cout << "🙂 🙂 🙂 🙂 🙂 🙂 🙂 🙂 🙂";

    return 0;
}