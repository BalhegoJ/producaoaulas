/*4. Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a sua massa
inicial em Kg, faça um algoritmo que determine o tempo necessário para que essa massa se torne menor
que 0,5 gramas. Escreva a massa inicial, a massa final e o tempo.*/

#include <iostream>

using namespace std;

int main()
{

    float massai = 0, massaf = 0;
    int tempo = 0;

    cout << "digite a massa inicial em KG: " << endl;
    cin >> massai;

    while (massai > 0.5)

    {
        massai /= 2;
        tempo += 50;
        cout << massai << endl;
    }

    massaf = massai;
    cout << "massa final: " << massaf << endl;
    cout << "tempo total: " << tempo << "seg" << endl;

    return 0;
}