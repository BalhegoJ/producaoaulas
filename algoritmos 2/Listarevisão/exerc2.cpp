#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");
    int vetnum[10], pos[10], par[10], npar = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "informe o numero " << i + 1 << " do vetor: ";
        cin >> vetnum[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (vetnum[i] % 2 == 0 and vetnum[i] != 0)

        {
            pos[npar] = i;
            npar++;
        }
    }

    cout << endl
         << endl;
    cout << "Vetor de números pares:";

    for (int i = 0; i < 10; i++)
    {

        if (vetnum[i] % 2 == 0 and vetnum[i] != 0)
        {

            cout << "[" << vetnum[i] << "]";
        }
    }

    cout << endl
         << endl;

    cout << "vetor das posições: ";

    for (int i = 0; i < npar; i++)
    {
        cout << "[" << pos[i] + 1 << "]";
    }

    return 0;
}