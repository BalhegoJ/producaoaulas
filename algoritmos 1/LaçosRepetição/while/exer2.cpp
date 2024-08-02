/*2. Uma máquina de biscoito está com problemas. Quando ligada, após 1 hora ela quebra 1 biscoito, na
segunda hora ela quebra 3 biscoitos, na hora seguinte ela quebra 3 vezes a quantidade de biscoitos
quebrados na hora anterior, e assim por diante. Faça um algoritmo que calcule quantos biscoitos são
quebrados no final de cada dia (a máquina opera 16 horas por dia).*/

#include <iostream>

using namespace std;

int main()
{
    int hora = 1, qtde = 1, soma = 0;

    while (hora <= 16)
    {
        soma += qtde;
        hora++;
        qtde *= 3;
        cout << "biscoitos quebrados nessa hora " << soma << endl;
    }

    cout << "a quantidade final de biscoitos quebrados é de: " << qtde << endl;

    return 0;
}