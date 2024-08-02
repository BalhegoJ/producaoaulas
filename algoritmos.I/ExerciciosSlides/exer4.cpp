#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    string vetortime[3];
    int i = 0;

    for (int i = 0; i < 3; i++)
    {

        cout << "informe o nome do " << i + 1 << " time: ";
       
    } getline(cin, (vetortime[i]));
    cout << endl;
    cout << "tabela de jogos" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (vetortime[i] != vetortime[j])
            {
                cout << vetortime[i] << " () X () " << vetortime[j] << endl;
            }
        }
    }

    cout << "------------------------------------";

    return 0;
}