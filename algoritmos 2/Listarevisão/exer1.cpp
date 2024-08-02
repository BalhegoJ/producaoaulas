#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");
    int vetnum[10];

    for (int i = 1; i <= 10; i++)
    {
        cout << "informe o numero " << i << " do vetor: ";
        cin >> vetnum[i];
    }
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "[" << vetnum[i] << "]";
    }

    for (int i = 1; i <= 10; i++)
    {
        bool ehprimo = true;
        for (int divisor = 2; divisor <= vetnum[i] / 2; divisor++)
        {
            if (vetnum[i] % divisor == 0)
            {
                ehprimo = false;
                break;
            }
        }

        if (ehprimo)
        {
            cout << endl
                 << endl;
            cout << "o número " << vetnum[i] << " é primo e está na posição " << i + 1 << " !" << endl;
        }
    }

    return 0;
}