#include <iostream>
using namespace std;

int main()
{
    int matriz[5][5], matrizT[5][5], somapac = 0, somapab = 0, somap = 0;

    setlocale(LC_ALL, "portuguese");

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            cout << "informe os valores da matriz 5x5 " << "(" << i+1 << j+1 << "):";
            cin >> matriz[i][j];
            matrizT[i][j] = matriz[j][i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j > i)
            {
                somapac += matriz[i][j];
            }
            if (i > j)
            {
                somapab += matriz[i][j];
            }
            if (i == j)
            {
                somap += matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "soma da diagonal principal: " << somap << endl;
    cout << "soma da diagonal principal superior: " << somapac << endl;
    cout << "soma da diagonal principal superior: " << somapab;

    return 0;
}