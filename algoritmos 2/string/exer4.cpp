/*Uma palavra palíndrome é uma cadeia de caracteres cuja leitura tem o mesmo sentido se feita da
direita para a esquerda ou vice-versa. Por exemplo, OSSO, OVO, RADAR, ... Ler n cadeias de
caracteres e determinar quais delas são palíndromes. */

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");
    string palavra;
    char condicao = true;
    char opc;

    do
    {
        cout << "informe uma palavra para descobrir se ela é palíndrome ou não: ";
        getline(cin, palavra);
    } while (palavra.empty());

    char inicio = toupper(palavra.front());
    char fim = toupper(palavra.back());

    while (inicio < fim)
    {
        if (inicio != fim)
        {
            condicao = false;
        }

        inicio++;
        fim--;
    }

    if (condicao)
    {
        cout << "A palavra é palíndrome" << endl;
    }
    else
    {
        cout << "A palavra não é palíndrome" << endl;
    }

        return 0;
}
