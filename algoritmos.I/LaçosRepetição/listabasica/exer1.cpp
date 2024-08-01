/* Faça um contador e exiba os valores:
a. De 0 até 10
b. De 10 até 0
c. De até 10, contando de 2 em 2 */

#include <iostream>
using namespace std;

int main()
{

    char opc;

    cout << "A. De 0 até 10" << endl;
    cout << "B. De 10 até 0" << endl;
    cout << "C. De até 10, contando de 2 em 2" << endl;
    cout << "Qual opção você quer ? ";
    cin >> opc;

    switch (opc)
    {
    case 'A':
        for (int i = 0; i <= 10; i++)
        {
            cout << i << " ";
        }
        break;

    case 'B':
        for (int i = 10; i >= 0; i--)
        {
            cout << i << " ";
        }
        break;
        
    case 'C':
        for (int i = 0; i <= 10; i += 2)
        {
            cout << i << " ";
        }
        break;

    }


    return 0;
}