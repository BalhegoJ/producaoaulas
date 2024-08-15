/*Faça um programa que recebe do usuário uma string A e monte uma nova string B
cujo conteúdo é a string A sem suas vogais. Mostre B ao final.*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string fraseA, fraseB;

    do
    {
        cout << "informe a sua frase: ";
        getline(cin, fraseA);

    } while (fraseA.empty());

    fraseB = fraseA;

    for (unsigned int i = 0; i < fraseA.size(); i++)
    {
        char c = toupper(fraseA[i]);
        if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
        {
            fraseA.erase(i--,1);
        }
    }

    cout << "frase sem vogais: " << fraseA << endl;

    return 0;
}