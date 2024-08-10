/*Dado uma string A e um número n, retorne uma string B que consiste na reprodução de A n
vezes. Por exemplo, se A = “tchau” e n = 2 então B = “tchau tchau”.*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    string palavra1, palavra2;
    int n;

    do
    {
        cout << "Informe a palavra que deseja: ";
        getline(cin, palavra1);
    } while (empty(palavra1));

    do
    {
        cout << "Quantas vezes você deseja imprimir essa palavra na tela ? ";
        cin >> n;
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        palavra2 += palavra1 + " ";
    }

    cout << palavra2;

    return 0;
}