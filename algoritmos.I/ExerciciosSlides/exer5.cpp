/*• Implementar um algoritmo que calcule a nota dos alunos de uma turma com 3 alunos, e a média de
notas da turma.

– Na primeira etapa deverá ser cadastrado o gabarito de 5
questões, com respostas com valores: a,b,c,d ou e.
– Depois, o usuário deverá informar o nome do aluno e as
respostas das 5 questões da prova.
– Ao final o algoritmo apresenta a relação dos alunos, a nota
da prova de cada aluno e a média da turma.*/

#include <iostream>

using namespace std;

int main()
{

    string Vnome[3];
    char Vgabarito[5];
    double soma = 0, mediaT;
    int i = 0, j = 0, notaP = 0, ii= 0;
    int notaF[i];

    for (i = 0; i < 5; i++)
    {
        do
        {
            cout << endl;
            cout << "informe a opção correta da questão " << i + 1 << " (a/b/c/d/e) :";
            cin.get(Vgabarito[i]);
            cin.ignore();
            cout << endl;
        } while (Vgabarito[i] != 'a' && Vgabarito[i] != 'b' && Vgabarito[i] != 'c' && Vgabarito[i] != 'd' && Vgabarito[i] != 'e');
    }

    char Vres[5];

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "informe o nome do aluno: ";
         getline(cin, (Vnome[i]));
        cout << endl;

        for (int i = 0; i < 5; i++)
        {
            do{
            cout << "digite a respota da questão " << i + 1 << ":";
            cin >> Vres[i];
            cout << endl;
            }while(Vres[i] != 'a' || Vres[i] != 'b' || Vres[i] != 'c' || Vres[i] != 'd' || Vres[i] != 'e' );

            if (Vres[i] == Vgabarito[i])
            {
                notaP += 2;
            }
        }

        soma += notaP;
        notaF[i] = notaP;

        ii++;

        if (ii == 1 || ii == 2 || ii == 3 || ii == 4 || ii == 5)
        {
            notaP = 0;
        }

        cout << Vnome[i] << " : " << notaF[i] << endl;
        cout << "-------------------------------------" << endl;
    }

    mediaT = soma / 3;

    for (int i = 0; i < 3; i++)
    {
        cout << Vnome[i] << ": " << notaF[i] << "/10 na prova" << endl;
    }

    cout << "media da turma na prova: " << mediaT << "/10" << endl;

    return 0;
}