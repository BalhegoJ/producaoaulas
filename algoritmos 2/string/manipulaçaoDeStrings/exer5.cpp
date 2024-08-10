/*Dada uma cadeia de caracteres, verifique se é ou não um identificador (nome de variável) válido.
Um identificador válido é uma cadeia de caracteres cujo primeiro caracter deve ser uma letra e os
demais devem ser dígitos, letras ou o underscore ( _ ). Exemplos: casa_azul, conjunto1, umValor.*/

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{

    string frase;
    bool identificador = false;

    do
    {
        cout << "Informe a frase que deseja: ";
        getline(cin, frase);
    } while (frase.empty());

    if (!isalpha(frase[0]))
    {
        identificador = false;
    }
    else
    {
        for (int i = 1; i < frase.size(); i++)
        {
            if (isdigit(frase[i]) or frase[i] == '_')
            {
                identificador = true;
                break;
            }
        }
    }
    if (identificador)
    {
        cout << "Esta tudo correto com a frase;";
    }
    else
    {
        cout << "A frase não está correta";
    }

    return 0;
}