/*Calcular e escrever os n primeiros termos da sequência numérica apresentada abaixo: 
S= 1/2 - 2/4 + 4/8 - 8/16 + ⋯*/

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    int n = 0, num = 0;
    double calculo = 0, deno = 0, somaT=0;

    cout << "Digite o valor de n (número de termos): ";
    cin >> n;

    num = 1;
    deno = 2;

    for (int i = 1; i <= n; i++) {
        cout << num << "/" << deno << " ";
        num++;
        deno *= 2;
        if (num % 2 == 0){
            calculo = (num-1) / (deno);
            somaT = somaT + calculo;
        }else if(num % 2 == 1){
             calculo = (num-1) / (deno);
            somaT = somaT - calculo;
        }
    }
    somaT += somaT;

    cout << "\nCalculo dos termos = " << somaT;

    return 0;
}
