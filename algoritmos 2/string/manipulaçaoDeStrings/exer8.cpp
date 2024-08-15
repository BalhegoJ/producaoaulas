/*Faça um programa que recebe uma string A e inteiros positivos I e J e mostre o
segmento A[I..J]. */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()

{

    string A;
    int b = 0, c = 0;
    setlocale(LC_ALL, "portuguese");

    do
    {

        cout << "informe sua frase: ";
        getline(cin, A);
        cout << endl;
        if (A.empty())
        {
            cout << "frase vazia, tente novamente." << endl;
            continue;
        }
        else
        {

            cout << "posições do codigo de 1 até " << A.size() << ", ";
            cout << "informe a primeira posição o intervalo que deseja: ";
            cin >> b;
            cin.ignore();

            cout << "informe a ultima posição o intervalo que deseja: ";
            cin >> c;
            cin.ignore();
        }

    } while (b < 0 or c > A.size() or b >= c);

    b = b - 1;
    c = c - 1;
    
    cout << "A frase informada imprimida nos limites da string nas posições " << b << " e " << c << endl;
    cout << "[";

    for (int i = b; i <= c; i++)
    {
        cout << A[i];
    }
    cout << "]";

    return 0;
}