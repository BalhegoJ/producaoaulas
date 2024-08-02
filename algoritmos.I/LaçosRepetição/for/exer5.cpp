/*5. A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, ...
Faça um algoritmo que escreva esta série até o n-ésimo termo. O valor n deve ser lido e deve ser maior do
que 2 (use repita-ate para controlar a entrada de dados).*/

#include <iostream>

using namespace std;

int main()
{

    int i = 1, ii = 1, iii = 0, n;

    do
    {

        cout << "informe u n termo que deseja: ";
        cin >> n;

        while (i <= n)
        {

            i = i;
            ii += i;
            iii = i+ii;

            cout << iii << endl;
        }

    } while (n >= 2);

    return 0;
}