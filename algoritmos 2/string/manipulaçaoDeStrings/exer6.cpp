/*Dadas duas palavras verificar se uma é permutação circular de outra. Para se obter uma
permutação circular dessa palavra transfere-se o primeiro caracter do início para o fim da mesma.
Para se obter todas as outras permutações circulares, repete-se esse mesmo processo para cada
permutação circular obtida até que o último caracter da palavra inicial torne-se o primeiro. Assim,
por exemplo a palavra AROMA tem as seguintes permutações circulares: ROMAA, OMAAR,
MAARO, AAROM, AROMA.*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    string palavra, palavra2;
    char caux;
    bool achou = false;
    int j = 0;

    do
    {
        cout << "Palavra ? ";
        getline(cin, palavra);
    } while (palavra.empty());
    do
    {
        cout << "Palavra2 ? ";
        getline(cin, palavra2);
    } while (palavra2.empty());

    if (palavra.size() == palavra2.size())
    {
        do
        {

            j++;
            if (palavra == palavra2)
            {
                achou = true;
            }
            else
            {
                caux = palavra[0];

                for (unsigned int i = 0; i < palavra.size() - 1; i++)
                {

                    palavra[i] = palavra[i + 1];
                }
                palavra[palavra.size() - 1] = caux;
            }
        } while (not achou and j < palavra.size());
    }
    if (achou)
    {
        cout << "São permutações circulares";
    }

    else
        cout << "Não são permutações circulares";
    return 0;
}
