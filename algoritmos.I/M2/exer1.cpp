/* Dado um número inteiro e positivo, pode-se dizer que este número é perfeito se for igual à soma 
de seus divisores positivos, excluindo ele próprio. Construa um algoritmo/programa, que verifique 
se um dado número é (ou não) perfeito. Exs.: o número 6 é perfeito pois 1+2+3 = 6, o número 
28 é perfeito pois 1+2+4+7+14 = 28. O número 8 não é perfeito pois 1+2+4 = 7, o número 15 não 
é perfeito pois 1+3+5 = 9. */


#include <iostream>

using namespace std;

bool(verificacao)(int num){
        int soma = 0;

        for(int i = 1; i<= num / 2; i+= 1){
            if (num % i == 0){
                soma += i;
            }
        }

        if (soma == num){
            return true;
        }else {
            return false;
        }
}
int main(){
    setlocale (LC_ALL, "portuguese");
    int numero=0;
    char opcao;
    do{
    cout << "Digite um número positivo inteiro: ";
    cin >> numero;
    }while(numero < 1);
    cout << "\n";
    if(verificacao(numero)){
        cout << numero << " É um número perfeito.\n";
    }else{
        cout << numero << " Não é um número perfeito.\n";
    }

return 0;
}