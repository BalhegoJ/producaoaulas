/*6. Durante um período contínuo de 28 dias (4 semanas), foi anotada a temperatura diária em uma
cidade e os dados estão armazenados em uma matriz 4x7. Faça um algoritmo que:
• leia os valores das temperaturas;
• calcule, para cada semana, a temperatura média, a máxima e a mínima;
• determine o dia mais quente e o dia mais frio do período observado;
• determine a quantidade de dias em que a temperatura esteve acima dos 25oC e a quantidade
de dias em que a temperatura esteve abaixo dos 25oC.
• ao final, apresente os resultados. */

#include <iostream>
using namespace std;

int main()
{

    int matriz[4][7], maior = 0, menor = 51, media1 = 0, media2 = 0, media3 = 0, media4 = 0;
    int max1 = 0, max2 = 0, max3 = 0, max4 = 0;
    int min1 = 50, min2 = 50, min3 = 50, min4 = 50;
    int acima = 0, abaixo = 0;
    int k = 1, l = 1, p, q;
    int maxtotal = 0, mintotal = 51;

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 7; j++)
        {
            do
            {
                cout << "insira a termperatura do dia " << k << ": ";
                cin >> matriz[i][j];
                k++;
                l++;

                if (matriz[i][j] < mintotal)
                {
                    p = k;
                }

                if (matriz[i][j] > maxtotal)
                {
                    q = l;
                }

            } while (matriz[i][j] < 0 || matriz[i][j] > 50);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            media1 += matriz[0][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }

            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }

            if (matriz[i][j] > 25)
            {
                acima += 1;
            }
            if (matriz[i][j] < 25)
            {
                abaixo += 1;
            }

            if (matriz[0][j] > max1)
            {
                max1 = matriz[0][j];
            }
            if (matriz[1][j] > max2)
            {
                max2 = matriz[1][j];
            }
            if (matriz[2][j] > max3)
            {
                max3 = matriz[2][j];
            }
            if (matriz[3][j] > max4)
            {
                max4 = matriz[3][j];
            }

            if (matriz[0][j] < min1)
            {
                min1 = matriz[0][j];
            }
            if (matriz[1][j] < min2)
            {
                min2 = matriz[1][j];
            }
            if (matriz[2][j] < min3)
            {
                min3 = matriz[2][j];
            }
            if (matriz[3][j] < min4)
            {
                min4 = matriz[3][j];
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    cout << "para a primeira semana a media é de: " << media1 << " graus, maxima de: " << max1 << " graus, e minima de: " << min1 << " graus" << endl;
    cout << "para a segunda semana a media é de: " << media2 << " graus, maxima de: " << max2 << " graus, e minima de: " << min2 << " graus" << endl;
    cout << "para a terceira semana a media é de: " << media3 << " graus, maxima de: " << max3 << " graus, e minima de: " << min3 << " graus" << endl;
    cout << "para a quarta semana a media é de: " << media4 << " graus, maxima de: " << max4 << " graus, e minima de: " << min4 << " graus" << endl;
    cout << "total de " << acima << " dias acima dos 25 graus, e " << abaixo << " dias abaixo dos 25 graus. " << endl;
    cout << "o dia com maior temperatura foi o dia " << p - 1 << endl;
    cout << "o dia com a menor temperatura foi o dia " << q - 1 << endl;
    return 0;
}
