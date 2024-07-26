/*Leia um valor real para x e calcule o valor de f(x)
conforme a definição matemática ao lado:

     |1, se x <= 1
     |2, se 1 < x <= 2
f(x) |X^2,se 2 < x <= 3
     |x^3,se x > 3 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    double X, valorX;
    do
    {
        cout << "digite o valor de X para calular a f(x): ";
        cin >> X;
        cout << endl;
    } while (X < 0);

    if (X <= 1)
    {
        valorX = 1;
    }

    if (X > 1 && X <= 2)
    {
        valorX = 2;
    }

    if (X > 2 && X <= 3)
    {
        valorX = pow(X, 2);
    }

    if (X > 3)
    {
        valorX = pow(X, 3);
    }
    cout << fixed << setprecision(2);
    cout << "O valor de f(x) é igual á: " << valorX;
    return 0;
}