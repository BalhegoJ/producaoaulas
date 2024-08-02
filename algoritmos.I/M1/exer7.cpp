/*Elabore um algoritmo que leia o preço de etiqueta de um produto e o código da condição de
pagamento (conforme abaixo), calcule e mostre o que deve ser efetivamente pago por ele.
Código - Condição de pagamento
1 - À vista em dinheiro ou cheque, recebe 10% de desconto
2 - À vista no cartão de crédito, recebe 15% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em duas vezes, preço normal de etiqueta mais juros de 10*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int condição;
    double preço, precofinal;

    cout << "Qual o preço de etiqueta do produto ? R$";
    cin >> preço;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl
         << endl;
    cout << "1 - À vista em dinheiro ou cheque, recebe 10% de desconto" << endl;
    cout << "2 - À vista no cartão de crédito, recebe 15% de desconto" << endl;
    cout << "3 - Em duas vezes, preço normal de etiqueta sem juros" << endl;
    cout << "4 - Em três vezes, preço normal de etiqueta mais juros de 10%" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl
         << endl;

    do
    {
        cout << "Qual o codigo da condição de pagamento que deseja ? ";
        cin >> condição;
    } while (condição < 1 || condição > 4);
    cout << endl;

    cout << fixed << setprecision(2);

    switch (condição)
    {
    case 1:
        cout << "Opção a vista no dinheiro ou cheque escolhida, recebe 10% de desconto! " << endl;
        precofinal = preço * 0.9;
        cout << "preço final a pagar pelo produto R$" << precofinal;
        break;

    case 2:
        cout << "Opção a vista no cartão de crédito escolhida, recebe 15% de desconto!" << endl;
        precofinal = preço * 0.85;
        cout << "preço final a pagar pelo produto R$ " << precofinal << endl;
        break;

    case 3:
        cout << "Opção em 2x escolhida, preço da etiqueta sem juros!" << endl;
        precofinal = preço;
        cout << "preço de cada parcela: R$" << precofinal / 2 << endl;
        cout << "preço final a pagar pelo produto R$ " << precofinal << endl;
        break;

    case 4:
        cout << "Opção 3x, preço da etiqueta com juros de 10% !" << endl;
        precofinal = preço * 1.10;
        cout << "preço de cada parcela: R$" << precofinal / 3 << endl;
        cout << "preço final a pagar pelo produto R$ " << precofinal << endl;
        break;
    }

    return 0;
}
