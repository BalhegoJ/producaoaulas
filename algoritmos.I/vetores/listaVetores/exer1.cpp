/*Faça um algoritmo que leia o nome e a nota da prova de uma turma de n (n ≤ 20) estudantes, e
armazene as informações em vetores. Calcule a média da turma. Apresente o nome dos estudantes
cuja a nota é maior ou igual a média da turma e determine também quantos estudantes obtiveram nota
abaixo da média da turma.*/

#include <iostream>

using namespace std;

int main()
{

    int x;

    do
    {
        cout << "escreva o tamanho do vetor: ";
        cin >> x;
        cout << endl;
    } while (x > 20 || x < 1);

    string vetnome[x];
    double vetnota[x], somamed = 0, media = 0;
    int alumen = 0;

    for (int i = 0; i < x; i++)
    {
        cin.ignore();
        cout << "informe o seu nome: " << endl;
        getline(cin, vetnome[i]);
        cout << "informe sua nota da prova: " << endl;
        cin >> vetnota[i];
        cout << endl;
        somamed += vetnota[i];
    }

    media = somamed / x;

    for (int i = 0; i < x; i++)
    {

        if (vetnota[i] >= media)
        {
            cout << "nome: " << vetnome[i] << endl;
            cout << "nota: " << vetnota[i] << endl;
            cout << endl;
        }
        else
        {
            alumen += 1;
        }
    }

    cout << "Média da turma na prova : " << media << endl;
    cout << "Quantidade de alunos com a nota abaixo da média : " << alumen << endl;

    return 0;
}