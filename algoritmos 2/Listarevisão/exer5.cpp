/* Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (A, B, C, D ou E),
em uma turma com n (n<=10) alunos. Cada questão vale 1,0. Leia o gabarito, e para cada aluno leia
sua matrícula (número inteiro) e suas respostas. Para cada aluno, calcule e escreva sua matrícula,
suas respostas, e sua nota. Calcule também o percentual de aprovação da turma, assumindo nota 7.0
para aprovação. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, nota = 0, matricula, i = 0;
    char gabarito[10], respostas[10];
    double percentual;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            cout << "Informe o gabarito da Prova, questão " << i + 1 << " :";
            cin.get(gabarito[i]);
            cin.ignore();
        } while (gabarito[i] != 'A' and gabarito[i] != 'B' and gabarito[i] != 'C' and gabarito[i] != 'D' and gabarito[i] != 'E');
    }
    do
    {

        cout << "Quantos alunos irão ter a prova corrigida ? ";
        cin >> n;
        cin.ignore();
        cout << endl;

    } while (n < 1 || n > 11);

    for (int i = 0; i < n; i++)
    {
        cout << "informe a matricula do aluno: ";
        cin >> matricula;
        cout << endl;

        nota = 0;
        for (int j = 0; j < 10; j++)
        {
            cin.ignore();
            do
            {
                cout << "digite a respota da questão " << j + 1 << " :";
                cin.get(respostas[j]);
            } while (respostas[j] != 'A' and respostas[j] != 'B' and respostas[j] != 'C' and respostas[j] != 'D' and respostas[j] != 'E');

            if (gabarito[j] == respostas[j])
            {
                nota++;
            }
        }

        cout << "matricula " << matricula << ", nota: " << nota << "/10 na prova" << endl;

        if (nota >= 7)
        {
            percentual++;
        }

        cout << endl
             << endl;
    }

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "percentual de aprovação da turma é de " << percentual * 100 / n << "%";
    return 0;
}