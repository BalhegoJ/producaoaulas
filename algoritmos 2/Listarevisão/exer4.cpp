/*Faça um programa que leia n (n<=10) pares de dois valores, o primeiro valor representando o
número do aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e
o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas. */

#include <iostream>
using namespace std;

int main()
{

    int n, numais, numenos;
    float altmaior = 0, altmenor = 2.50;

    do
    {
        cout << "informe quantos alunos serão informados (de 1 a 10): ";
        cin >> n;
    } while (n > 10);

    int naluno[n];
    float altura[n];

    for (int i = 0; i < n; i++)
    {
        cout << "informe o número do aluno " << i + 1 << ": ";
        cin >> naluno[i];
        cout << "informe a sua altura em metros: ";
        cin >> altura[i];

        if (altura[i] > altmaior)
        {
            altmaior = altura[i];
            numais = naluno[i];
        }
        if (altura[i] < altmenor)
        {
            altmenor = altura[i];
            numenos = naluno[i];
        }
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "aluno " << i + 1 << ", número : " << naluno[i] << ", altura do mesmo: " << altura[i] << endl;
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - " << endl;

  cout << "número do aluno mais baixo: " << numenos << ", sua altura: " << altmenor << endl;
  cout << "número do aluno mais alto: " << numais << ", sua altura: " << altmaior << endl;
    return 0;
}