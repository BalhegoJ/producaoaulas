/*Faça um algoritmo que leia n (n ≤ 100) pares de valores, sendo o primeiro valor o número de inscrição
do atleta e o segundo a altura (em cm) do atleta, e armazene-os em vetores. Apresente ao final o número
de inscrição e a altura do atleta mais alto, o número de inscrição e a altura do atleta mais baixo e a
altura média do grupo de atletas. */

#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    do
    {
        cout << "informe o valor n (n <= 15) de vetores: " << endl;
        cin >> x;
    } while (x > 100 || x < 1);

    int vetorins[x], vetoralt[x];
    double soma = 0, media = 0;
    int maior = 0, menor = 999999;
    int insmaior, insmenor;

    for (int i = 0; i < x; i++)
    {
        cout << endl;
        cout << "informe sua inscrição : " << endl;
        cin >> vetorins[i];
        cout << "informe sua altura em (cm): " << endl;
        cin >> vetoralt[i];

        soma += vetoralt[i];

        if (vetoralt[i] > maior)
        {
            maior = vetoralt[i];
            insmaior = vetorins[i];
        }

        if (vetoralt[i] < menor)
        {
            menor = vetoralt[i];
            insmenor = vetorins[i];
        }
    }

    media = soma / x;
    cout << endl;
    cout << "inscrição: " << insmaior << " e " << "altura: " << maior << "cm " << "do atleta mais alto." << endl;
    cout << "inscrição: " << insmenor << " e " << "altura: " << menor << "cm " << "do atleta mais baixo." << endl;

    return 0;
}