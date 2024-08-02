/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua
altura, faça um algoritmo que leia os dados necessários, calcule e mostre a altura do prédio. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    double altpessoa, sombrapessoa, altsombra, altpredio;

    cout << "informe a altura da pessoa: ";
    cin >> altpessoa;
    cout << endl;
    cout << "informe o comprimento da sombra desta pessoa: ";
    cin >> sombrapessoa;
    cout << endl;
    cout << "informe a altura da sombra do predio: ";
    cin >> altsombra;
    cout << endl;

    altpredio = (altpessoa * altsombra) / sombrapessoa;

    cout << fixed << setprecision(2);

    cout << "A altura do predio é de: " << altpredio <<" metros";

    return 0;
}