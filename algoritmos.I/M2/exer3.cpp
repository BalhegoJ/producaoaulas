/* Elabore um algoritmo/programa que realize o sorteio de 15 números aleatórios entre 0 e 10 e
apresente na tela:
a) A quantidade de números divisíveis por 4.
b) Quais foram os números sorteados.
c) A soma dos números ímpares.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(nullptr));

    int div4 = 0;
    int numSor[15];
    int somaI = 0;

    cout << "Números sorteados:\n";
    for (int i = 0; i < 15; i += 1)
    {
        int num = rand() % 11;
        numSor[i] = num;
        cout << num << " - ";
        if (num != 0)
        {
            if (num % 4 == 0)
            {
                div4 += 1;
            }
        }
        if (num % 2 != 0)
        {
            somaI += num;
        }
    }

    cout << "\n\nQuantidade de números divisiveis por 4 é: " << div4 << "\n";
    cout << "\nSoma dos números impares: " << somaI << "\n";

    return 0;
}