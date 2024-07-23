/*Em qualquer experiência, existe um certo erro associado às medidas. Uma técnica conhecida como 
suavização pode ser utilizada para reduzir o efeito deste erro na análise dos resultados. Suponha que 
uma série de n (n ≤ 10) valores do tipo real tenha sido registrada e armazenada em um vetor V. Antes 
da análise destes resultados, a seguinte operação de suavização é aplicada aos valores de V (exceto 
para o primeiro e último valor que não mudam): Vi é substituído por (Vi-1  +  Vi  +  Vi+1) / 3. Faça um 
algoritmo que leia as medidas iniciais e, então, escreva os valores observados (medidas iniciais) e os 
suavizados. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite o número de elementos no vetor (n ≤ 10): ";
    cin >> n;

    double V[n];
    double suavizado[n];

    cout << "Digite os valores do vetor: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> V[i];
        suavizado[i] = V[i]; // Inicializa o vetor suavizado com os valores originais
    }

    // Aplicação da suavização
    for (int i = 1; i < n - 1; ++i) {
        suavizado[i] = (V[i - 1] + V[i] + V[i + 1]) / 3.0;
    }

    // Apresentação dos resultados
    cout << "\nValores observados (medidas iniciais): " << endl;
    for (int i = 0; i < n; ++i) {
        cout << V[i] << " ";
    }

    cout << "\nValores suavizados: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << suavizado[i] << " ";
    }

    return 0;
}
