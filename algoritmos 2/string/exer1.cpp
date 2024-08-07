#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");
    char opc;
    string frase;
    int cont = 0;
    do
    {
        do
        {

            cout << "informe a frase que deseja: " << endl;
            getline(cin, frase);

        } while (frase.empty());

        for (int i = 0; i < frase.size(); i++)
        {
            if (frase[i] != ' ' and frase[i] != '.')
            {
                cout << frase[i];
                cont++;
            }
            else
            {
                cout << " " << cont << endl;
                cont = 0;
            }
        }
        cout << endl;
        cout << "deseja informar mais uma frase ? " << endl;
        opc = toupper(cin.get());
    } while (opc == 'S');

    return 0;
}