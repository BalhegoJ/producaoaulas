/* Uma fábrica tem 4 representantes. Cada um recebe uma comissão calculada a partir do número 
de itens de um pedido, seguindo os critérios abaixo: 
 Para menos de 20 itens vendidos, a comissão é da 10% do valor do pedido; 
 Para pedidos de 20 a 49 itens, a comissão é de 15% do valor total do pedido; 
 Para pedidos de 50 a 74 itens, a comissão é de 20% do valor total do pedido; e 
 Para pedidos iguais ou superiores a 75 itens, a comissão é de 25%. 
Faça um algoritmo/programa que processe alguns pedidos. Para cada pedido o programa deve 
ler o código do representante (de 1 a 4), o total de itens do pedido e o valor total da venda. O 
algoritmo/programa deve calcular e mostrar: 
a) O valor da comissão de cada pedido; 
b) O total de vendas dos pedidos processados; 
c) O total de comissões para cada representante; 
d) O total de comissões que a companhia pagou aos seus representantes*/


#include <iostream>

using namespace std;

int main(){
    setlocale (LC_ALL, "portuguese");

    /*Testamos duas maneiras lógicas diferentes de executar
    o algoritmo sendo em  c++ perguntando o valor total do pedido,
    e em visualg colocando um produto com o valor fixo. */

    int numItens = 0, codRep = 0, rep1 = 0,rep2 = 0,rep3 = 0,rep4 = 0;
    double valorT = 0, comissao = 0;
    double Tvendas=0, Tcomissao= 0, comissaoE = 0;
    char opcao;

do{
            do{
    cout << "\nDigite o código do representante (1 a 4): ";
    cin >> codRep;
            }while(codRep < 1 or codRep > 4);
            do{
    cout << "\nDigite o total de itens do pedido: ";
    cin >> numItens;
            }while(numItens < 1);
    cout << "\nDigite o valor total da venda: R$";
    cin >> valorT;

    switch(codRep){
        case 1:
    if (numItens < 20){
       comissao = numItens * 0.10;
    }else
    if(numItens >= 20  and numItens >= 49){
        comissao = numItens * 0.15;
    }else
    if(numItens >= 50 and numItens <= 74){
        comissao = numItens * 0.20;
    }else {
        comissao = numItens * 0.25;
    }
    rep1 += comissao;
    Tcomissao += comissao;

    cout << "\nComissão do pedido: R$" << comissao << "\n";
    cout << "\nTotal de vendas até agora do representante 1: R$" << rep1 << "\n";
    break;

     case 2:
    if (numItens < 20){
       comissao = numItens * 0.10;
    }else
    if(numItens >= 20  and numItens >= 49){
        comissao = numItens * 0.15;
    }else
    if(numItens >= 50 and numItens <= 74){
        comissao = numItens * 0.20;
    }else {
        comissao = numItens * 0.25;
    }
    rep2 += comissao;
    Tcomissao += comissao;

    cout << "\nComissão do pedido: R$" << comissao << "\n";
    cout << "\nTotal de vendas até agora do representante 2: R$" << rep2 << "\n";
    break;

    case 3:
    if (numItens < 20){
       comissao = valorT * 0.10;
    }else
    if(numItens >= 20  and numItens >= 49){
        comissao = valorT * 0.15;
    }else
    if(numItens >= 50 and numItens <= 74){
        comissao = valorT * 0.20;
    }else {
        comissao = valorT * 0.25;
    }
    rep3 += comissao;
    Tcomissao += comissao;
    cout << "\nComissão do pedido: R$" << comissao << "\n";
    cout << "\nTotal de vendas até agora do representante 3: R$" << rep3 << "\n";
    break;

    case 4:
    if (numItens < 20){
       comissao = valorT * 0.10;
    }else
    if(numItens >= 20  and numItens >= 49){
        comissao = valorT * 0.15;
    }else
    if(numItens >= 50 and numItens <= 74){
        comissao = valorT * 0.20;
    }else {
        comissao = valorT * 0.25;
    }
    rep4 += comissao;
    Tcomissao += comissao;

    cout << "\nComissão do pedido: R$" << comissao << "\n";
    cout << "\nTotal de vendas até agora do representante 4: R$" << rep4 << "\n";
    break;
    }


    do{
    cout << "\nDeseja informar outro pedido? [S/N]: ";
    cin >> opcao;
    }while(opcao != 's' and opcao != 'S' and opcao != 'n' and opcao != 'N');

}while(opcao == 'S' or opcao == 's');

        comissaoE += Tcomissao;

        cout << "Comissão do representante 1: R$" << rep1 << "\n";
        cout << "Comissão do representante 2: R$" << rep2 << "\n";
        cout << "Comissão do representante 3: R$" << rep3 << "\n";
        cout << "Comissão do representante 4: R$" << rep4 << "\n";

        cout << "\nTotal de comissoes pagas pela empresa: R$" << comissaoE;


    return 0;
}
