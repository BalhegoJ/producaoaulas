/* A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé direito
do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar o tipo
de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento
custa R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar todos os seus
frangos. */

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    int frango, anelchip = 4, total = 0;
    double anelalimento = 3.5, custofrango;

    cout << "Quantos frangos ao total a granja deseja marcar ?: ";
    cin >> frango;
    cout << endl;

    anelalimento = anelalimento * 2;
    custofrango = anelalimento + anelchip;

    total = frango * custofrango;

    cout << "Valor para marcar cada frango: R$" << custofrango << endl << endl;
    cout << "O valor total para fazer a marcação de todos os frangos da granja é de: R$" << total;



    return 0;
}