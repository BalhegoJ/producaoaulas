/*• Preencher uma matriz 3x2 e exibir os valores.*/

#include <iostream>

using namespace std;

int main()
{

    int matriz[3][2];

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 2; c++)
        {

            cout << "informar os valores da matriz 3x2 : " << endl;
            cin >> matriz[l][c];
        }
        cout << endl;
    }

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 2; c++)
        {
           
            cout << "[" << matriz[l][c] << "]" << " ";
        }
        cout << endl;
    }

    return 0;
}