/*1. Desenvolver um programa que solicite o nome, a idade e o sexo de n (1 ≤ n ≤ 15) pessoas e armazene esses
dados em vetores. O programa deve oferecer um menu que permita ao usuário as seguintes opções:
A. Informar o valor de n e os dados das pessoas.
B. Consultar os dados da pessoa mais velha.
C. Consultar o nome e a idade da mulher mais jovem.
D. Consultar a média das idades dos homens.
E. Sai
As opções B até E só poderão ser executadas após a opção A ter sido realizada com sucesso. A cada consulta
realizada o programa deverá apresentar novamente o menu com as opções disponíveis. O programa só deverá
ser encerrado quando o usuário escolher a opção E.
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n = 0, homens = 0, feminino = 0, min = 101, max = 0;
    double media = 0;
    bool opcaoA = false;

    do
    {
        cout << "Digite a quantidade de pessoas que deseja informar: ";
        cin >> n;
    } while (n <= 1 || n > 15);

    cout << "--------------------------------------------------------" << endl;

    char sexo[n], opcao;
    string nome[n];
    int idade[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Digite o nome da pessoa: ";
        getline(cin, nome[i]);
        do
        {
            cout << "\nDigite a idade da pessoa: ";
            cin >> idade[i];
        } while (idade[i] < 1 || idade[i] > 100);

        do
        {
            cout << "\nQual o sexo da pessoa? [M - Masculino ou F - Feminino]: ";
            cin >> sexo[i];
        } while (sexo[i] != 'M' && sexo[i] != 'm' && sexo[i] != 'F' && sexo[i] != 'f');
        cout << endl;

        if (sexo[i] == 'M' || sexo[i] == 'm')
        {
            media += idade[i];
            homens += 1;
        }

        if (idade[i] > max)
        {
            max = idade[i];
        }

        if (idade[i] < min)
        {
            min = idade[i];
        }

        if (sexo[i] == 'F' || sexo[i] == 'f')
        {
            feminino += 1;
        }
        cout << "--------------------------------------------------------" << endl;
    }

    media = media / homens;

    do
    {

        cout << "------ Menu ------" << endl;
        cout << "A. Informar o valor de n e os dados das pessoas." << endl;
        cout << "B. Consultar os dados da pessoa mais velha." << endl;
        cout << "C. Consultar o nome e a idade da mulher mais jovem." << endl;
        cout << "D. Consultar a média das idades dos homens." << endl;
        cout << "E. Sai" << endl;
        cout << "selecione um item do menu:  ";

        cin >> opcao;

        cout << endl;

        cout << "---------------------------------------------" << endl;

        if (opcao == 'A')
        {
            opcaoA = true;
        }

        if (opcaoA)
        {
            switch (opcao)
            {

            case 'A':

                for (int i = 0; i < n; i++)
                {
                    cout << endl;
                    cout << "informações da " << i + 1 << "a" << " pessoa: " << endl;
                    cout << "nome: " << nome[i] << endl;
                    cout << "idade: " << idade[i] << endl;
                    if (sexo[i] == 'M')
                    {
                        cout << "sexo: masculino" << endl;
                    }
                    else
                    {
                        cout << "sexo: feminino" << endl;
                    }
                    cout << "-------------------------------";
                }
                break;

            case 'B':

                for (int i = 0; i < n; i++)
                {
                    if (idade[i] == max)
                    {
                        cout << "dados da pessoa mais velha: " << endl;
                        cout << "nome: " << nome[i] << endl;
                        cout << "idade: " << idade[i] << endl;
                        if (sexo[i] == 'M')
                        {
                            cout << "sexo: Masculino";
                        }
                        else
                        {
                            cout << "sexo: feminino";
                        }
                        cout << endl;
                    }
                }
                break;

            case 'C':

                if (feminino == 0)
                {
                    cout << "nenhuma mulher informada." << endl;
                }
                else
                {

                    for (int i = 0; i < n; i++)
                    {
                        if (sexo[i] == 'F' && idade[i] == min)
                        {
                            cout << "nome da mullher mais jovem: " << nome[i] << endl;
                            cout << "idade da mulher mais jovem: " << idade[i] << endl;
                        }
                    }
                }

                break;

            case 'D':

                cout << "A média de idade dos homens é de: " << media << " anos." << endl;
                break;

            case 'E':

                cout << "saindo." << endl;
                return 0;
                break;
            }
        }
        else
        {
            cout << "selecione a opção A para seguir com as demais." << endl;
        }
    } while (opcao != 'E' || opcao != 'e');

    return 0;
}