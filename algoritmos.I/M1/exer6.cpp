/*Faça um algoritmo que leia idade, sexo e tempo de serviço de um trabalhador (anos) e escreva se
ele pode ou não se aposentar. As condições para aposentadoria para quem é do sexo masculino são
ter pelo menos 65 anos e trabalhado pelo menos 30 anos. Se for do sexo feminino, ter pelo menos
60 anos e trabalhado pelo menos 25 anos. Resolva usando pelo menos um ESCOLHA.*/

#include <iostream>
using namespace std;

int main()
{

    int idade, tempo;
    char sexo;

    do
    {
        cout << "Qual o seu sexo (M - masculino / F - feminino)? ";
        cin >> sexo;
    } while (sexo != 'M' && sexo != 'F');

    switch (sexo)
    {
    case 'M':

        cout << "Qual a sua idade : ";
        cin >> idade;
        cout << endl;
        cout << "Qual o seu tempo trabalhado em anos :";
        cin >> tempo;
        cout << endl;

        if (idade >= 65 && tempo >= 30)
        {
            cout << "Você já pode se aposentar";
        }
        else
        {
            cout << "Você não pode se aposentar";
        }
        break;

    case 'F':

        cout << "Qual a sua idade : ";
        cin >> idade;
        cout << endl;
        cout << "Qual o seu tempo trabalhado em anos :";
        cin >> tempo;
        cout << endl;

          if (idade >= 60 && tempo >= 25)
        {
            cout << "Você já pode se aposentar";
        }
        else
        {
            cout << "Você não pode se aposentar";
        }

    default:
        break;
    }
    return 0;
}
