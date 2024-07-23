/*3. Faça um algoritmo que calcule e escreva a soma da seguinte série de 100 termos:
 S = 1 + 1/2 + 1/3 + 1/4 + 1/5 + . . . + 1/100 */

#include <iostream>

using namespace std;

int main()
{

    double soma = 0.0;

        for (int i = 1; i <= 100; i++)
    {
        soma += 1.0 / i;
    }
    cout << "A soma dos termos é igual: " << soma << endl;

    return 0;
}