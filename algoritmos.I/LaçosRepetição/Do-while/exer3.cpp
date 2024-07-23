    /*3. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares.
Termine a leitura se o usuário digitar zero (0).*/


/*Esse exercicio usou a estrutura "Do-While(Repita-Até)"*/


#include <iostream>

using namespace std;

int main()
{

    int num;
    int ipar = 0;
    double media, soma = 0;

    do
    {
        cout << "digite um numero, se par será calculado na media. se dejesa sair digite 0:" << endl;
        cin >> num;
        if (num % 2 == 0 && num != 0)
        {
            soma += num;
            ipar++;
        }

    } while (num != 0);
    media = soma / ipar;

    if (ipar == 0)
    {
        cout << "nenhum numero par informado!" << endl;
    }
    else
    {
        cout << "media final da soma dos numeros pares : " << soma << " / " << ipar << " = " << media << endl;
    }

    return 0;
}