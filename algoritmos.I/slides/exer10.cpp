/*• Preencher uma  matriz de 4º  ordem;
• Mostrar o menu  de opções para o  usuário

1. Mostrar a matriz preenchida

2. Diagonal Principal

3. Triângulo Superior

4. Triângulo Inferior

5. Sai*/

#include <iostream>
using namespace std;

int main()
{

    int matriz[4][4];
    int opcao;
    int l, c;

    cout << "------- MENU MATRIZ 4x4 -------" << endl;
    cout << "1 - Mostrar a matriz preenchida " << endl;
    cout << "2 - Mostrar a diagonal principal" << endl;
    cout << "3 - Mostrar o triangulo suprior" << endl;
    cout << "4 - Mostrar o triangulo inferior" << endl;
    cout << "5 - sair" << endl
         << endl;

    for (int l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            cout << "informe os valores da matriz 4x4 (" << l + 1 << c + 1 << "):" << endl;
            cin >> matriz[l][c];
        }
    }

    do
    {

        cout << "informe qual item do menu deseja : ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "matriz preenchida" << endl;
            for (int l = 0; l < 4; l++)
            {
                for (int c = 0; c < 4; c++)
                {
                    cout << "[" << matriz[l][c] << "]";
                }
                cout << endl;
            }
            break;

        case 2:
            cout << "diagonal principal" << endl;
            for (int l = 0; l < 4; l++)
            {
                for (int c = 0; c < 4; c++)
                {
                    if (l == c)
                    {

                        cout << "[" << matriz[l][c] << "]";
                    }
                    else
                    {
                        cout << "[ ]";
                    }
                }
                cout << endl;
            }
            break;

        case 3:
            cout << "triangulo superior" << endl;
            for (int l = 0; l < 4; l++)
            {
                for (int c = 0; c < 4; c++)
                {
                    if (l < c)
                    {
                        cout << "[" << matriz[l][c] << "]";
                    }
                    else
                    {
                        cout << "[ ]";
                    }
                }
                cout << endl;
            }
            break;

        case 4:
            cout << "triangulo inferior" << endl;
            for (int l = 0; l < 4; l++)
            {
                for (int c = 0; c < 4; c++)
                {
                    if (c < l)
                    {
                        cout << "[" << matriz[l][c] << "]";
                    }
                    else
                    {
                        cout << "[ ]";
                    }
                }

                cout << endl;
            }
        case 5:

            cout << "encerrando" << endl;
            break;
        }
    } while (opcao != 5);

    return 0;
}