/*Faça um algoritmo que leia uma frase e determine qual a vogal mais usada.*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

    string frase;
    int vogal[5] = {0};

    do
    {
        cout << "escreva a sua frase: ";
        getline(cin, frase);
    } while (frase.empty());

    for (int i = 0; i < frase.size(); i++)
    {

char letra = toupper(frase[i]);
        switch (letra)
        {
        case 'A':
            vogal[0]++;
            break;
        case 'E':
            vogal[1]++;
            break;
        case 'I':
            vogal[2]++;
            break;
        case 'O':
            vogal[3]++;
            break;
        case 'U':
            vogal[4]++;
            break;
        }
    }

    if (vogal[0] > vogal[1] and vogal[0] > vogal[2] and vogal[0] > vogal[3] and vogal[0] > vogal[4])
    {
        cout << "A vogal mais usada na frase é a letra A!";
    }

    else if (vogal[1] > vogal[2] and vogal[1] > vogal[3] and vogal[1] > vogal[4])
    {
        cout << "A vogal mais usada na frase é a letra E!";
    }

    else if (vogal[2] > vogal[3] and vogal[2] > vogal[4])
    {
        cout << "A vogal mais usada na frase é a letra I!";
    }

    else if (vogal[3] > vogal[4])
    {
        cout << "A vogal mais usada na frase é a letra O!";
    }

    else
    {
        cout << "A vogal mais usada na frase é a letra U!";
    }

    return 0;
}