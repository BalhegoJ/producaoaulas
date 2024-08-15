/*Faça um programa que receba uma frase e imprima esta frase de maneira invertida,
trocando também as letras A por *. */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

    string frase;
    setlocale(LC_ALL, "portuguese");

    do
    {

        cout << "informe a frase que deseja: ";
        getline(cin, frase);

    } while (frase.empty());

    for (int i = frase.size(); i >= 0; i--)
    {
        if (toupper(frase[i]) == 'A')
        {
            cout << '*';
        }
        else
        {

            cout << frase[i];
        }
    }

    return 0;
}