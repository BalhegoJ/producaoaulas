/*5. Faça um algoritmo que:
1- leia, para várias pessoas, a altura e o sexo (sexo = 'M' para masculino e sexo = 'F' para feminino);
2- escreva a média da altura das mulheres;
3- escreva a média da altura da turma.
A condição de parada é a resposta negativa do usuário à pergunta “Mais um aluno? S/N”. */

#include <iostream>

using namespace std;

int main()
{

    int i = 0, iF = 0, somaF = 0, somaT = 0, altura;
    double medF = 0, medT = 0;
    char sexo, condicao;

    do
    {
        cout << "Por favor informe o seu sexo: " << endl;
        cin >> sexo;

        if (sexo == 'M')

        {
            cout << "informe sua altura em Cm: " << endl;
            cin >> altura;
            somaT += altura;
            i++;
        }

        if (sexo == 'F')

        {
            cout << "informe sua altura em Cm: " << endl;
            cin >> altura;
            somaF += altura;
            somaT += altura;
            iF++;
            i++;

        }

        cout << "mais um aluno ? " << endl;
        cin >> condicao;

    } while (condicao != 'N');
    medF = somaF / iF;
    medT = somaT / i;

    cout << "A media de altura das mulheres da turma é de: " << medF << "Cm" << endl;  
    cout << "A media de altura da turma inteira é de: " << medT << "Cm" << endl; 



return 0;
}