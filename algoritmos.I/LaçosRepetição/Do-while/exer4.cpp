/*4. Uma turma tem muitos alunos. Faça um algoritmo que:
1-leia para cada aluno o seu nome e idade;
2-escreva os nomes dos alunos que tem 18 anos;
3-escreva a quantidade de alunos que tem idade acima de 20 anos.
A condição de parada é a resposta negativa do usuário à pergunta “Mais um aluno? S/N”.*/

#include <iostream>

using namespace std;

int main()
{
    string nome, nomes;
    int idade, i = 0, ii = 0;
    char condicao;
    do
    {
        cout << "informe o seu nome :" << endl;
        cin >> nome;
        cout << "informe a sua idade :" << endl;
        cin >> idade;
        if (idade == 18)
        {
            nomes += nome + "\n";
            ii++;
        }
        if (idade > 20)
        {
            i++;
        }

        cout << "mais um aluno (S/N) ?: ";
        cin >> condicao;

    } while (condicao != 'N');

    if (ii == 0)
    {
        nomes = "nenhum aluno com 18 anos encontrado";
    }
    cout << "Os nomes dos alunos que tem 18 anos são: " << nomes << endl;
    cout << "A quantidade de alunos que tem 20 anos é: " << i << endl;

    return 0;
}