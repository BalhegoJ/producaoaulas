/*Faça um programa recebe uma string A e duas letras L1 e L2, e troque todas as
ocorrências da letra L1 pela letra L2. Ao final mostre a string A atualizada. */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");
    string frase;
    char L1, L2;
    int j = 0;

    do
    {
        cout << "informe a frase que deseja: ";
        getline(cin, frase);
    } while (frase.empty());

    do
    {
        cout << "informe a L1: ";
        L1 = cin.get();
        cin.ignore();
        cout << "informe a L2: ";
        L2 = cin.get();
        cin.ignore();
    } while (not isalpha(L1) or not isalpha(L2) or L1 == L2);

    for (unsigned int i = 0; i < frase.size(); i++)
    {
        if (toupper(frase[i]) == toupper(L1))
            if (isupper(frase[i]))
            {
                frase[i] = toupper(L2);
                j++;
            }
            else
            {
                frase[i] = tolower(L2);
                j++;
            }
    }
    if (j == 0)
    {
        cout << "A frase informada n tem nenhuma letra para ser trocada." << endl;
    }
    else

    {
        cout << "frase alterada: " << frase;
    }

    return 0;
}