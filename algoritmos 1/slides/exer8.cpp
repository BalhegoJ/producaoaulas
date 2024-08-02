#include <iostream>

using namespace std;

int main()
{

    int ordem, l, c;

    do
    {

        cout << "informar uma matriz quadrada de ordem 2 até 6 " << endl;
        cin >> ordem;

    } while (ordem < 2 || ordem > 6);

    l = ordem;
    c = ordem;
    int matriz[l][c];

    for (int l = 0; l < ordem; l++)
    {
        for (int c = 0; c < ordem; c++)
        {
            if (l == c)
            {
                matriz[l][c] = 1;
            }
            else
            {
                matriz[l][c] = 0;
            }
        }
    }

    for (int l = 0; l < ordem; l++)
    {
        for (int c = 0; c < ordem; c++)
        {
            cout << "[" <<  matriz[l][c] << "]";
        }
        cout << endl;
    }

    return 0;
}