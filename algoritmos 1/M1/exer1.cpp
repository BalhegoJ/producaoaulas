/*1. João tem um cofrinho com muitas moedas, e quer saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e mostrar o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo
moeda de um tipo, a quantidade respectiva é zero. */

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    double total = 0, umcen = 0.01, cinco = 0.05, dez = 0.10, vintecinco = 0.25, cinquenta = 0.5, um = 1;
    int p01, p05, p10, p25, p50, p1;

    do
    {
        cout << "Quantas moedas de 1 centavo tem no cofrinho ? " << endl;
        cin >> p01;
    } while (p01 < 1);

    if (p01 > 0)
    {
        umcen = umcen * p01;
        total += umcen;
    }
    else
    {
        umcen = 0;
        total += umcen;
    }

    do
    {
        cout << "Quantas moedas de 5 centavos tem no cofrinho ?" << endl;
        cin >> p05;
    } while (p05 < 1);

    if (p05 > 0)
    {
        cinco = cinco *p05;
        total += cinco;
    }
    else
    {
        cinco = 0;
        total += cinco;
    }

    do
    {
        cout << "Quantas moedas de 10 centavos tem no cofrinho ?" << endl;
        cin >> p10;
    } while (p10 < 1);

    if (p10 > 0)
    {
        dez = dez * p10;
        total += dez;
    }
    else
    {
        dez = 0;
        total += dez;
    }

    do
    {
        cout << "Quantas moedas de 25 centavos tem no cofrinho ?" << endl;
        cin >> p25;
    } while (p25 < 1);

    if (p25 > 0)
    {
        vintecinco = vintecinco * p25;
        total += vintecinco;
    }
    else
    {
        vintecinco = 0;
        total += vintecinco;
    }

    do
    {
        cout << "Quantas moedas de 50 centavos tem no cofrinho ?" << endl;
        cin >> p50;

    } while (p50 < 1);

    if (p50 > 0)
    {
       cinquenta = cinquenta * p50;
        total += cinquenta;
    }
    else
    {
        cinquenta = 0;
        total += cinquenta;
    }

    cout << "Quantas moedas de 1 real tem no cofrinho ?" << endl;
    cin >> p1;

    if (p1 > 0)
    {
       um = um *p1;
        total += um;
    }
    else
    {
        um = 0;
        total += um;
    }

cout << " - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
cout << "total de moedas de 1 centavo: " << p01 << endl;
cout << "total de moedas de 5 centvaos: " << p05 << endl;
cout << "total de moedas de 10 centavos: " << p10 << endl;
cout << "total de moedas de 25 centvaos: " << p25 << endl;
cout << "total de moedas de 50 centavos: " << p50 << endl;
cout << "total de moedas de 1 real: " << p1 << endl;
cout << " - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
cout << "Valor total economizado: R$" << total;



    return 0;
}
