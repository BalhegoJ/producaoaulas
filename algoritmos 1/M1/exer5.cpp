/*Criar um algoritmo que leia idade e peso do paciente e calcule a dosagem de determinado
medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar por dose.
Considere que o medicamento em questão possui 500 mg por ml, e que cada
ml corresponde a 20 gotas - Pacientes com 12 anos ou mais, com peso
igual ou acima de 60 quilos devem tomar 1000 mg; com peso abaixo de 60 quilos devem
tomar 875 mg.

- Pacientes abaixo de 12 anos, a dosagem é
calculada pelo peso conforme esta tabela:

De 5kg a 9kg - 125mg
De 9.1kg a 16kg - 250mg
De 16.1kg a 24kg - 375mg
De 24.1kg a 30kg 500mg
Acima de 30kg - 750mg
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int idade, gota = 0, dosagem = 0;
    double peso;

    cout << "Informe sua idade: ";
    cin >> idade;
    cout << endl;
    cout << "Informe o seu peso: ";
    cin >> peso;
    cout << endl;

    gota = 500 / 20;

    if (idade >= 12 && peso < 60)
    {
        dosagem = 875 / gota;
        cout << "Este paciente deve se medicar 1000mg do medicamento, igual a " << dosagem << " gotas." << endl;
    }
    if (idade >= 12 && peso >= 60)
    {
        dosagem = 1000 / gota;
        cout << "Este paciente deve se medicar 875mg do medicamento, igual a " << dosagem << " gotas." << endl;
    }
    if (idade < 12)
    {
        if (peso >= 5 && peso <= 9)
        {
            dosagem = 125 / gota;
            cout << "Este paciente deve se medicar 125mg do medicamento, igual a " << dosagem << " gotas." << endl;
        }
        if (peso > 5 && peso <= 16)
        {
            dosagem = 250 / gota;
            cout << "Este paciente deve se medicar 250mg do medicamento, igual a " << dosagem << " gotas." << endl;
        }
        if (peso > 16 && peso <= 24)
        {
            dosagem = 375 / gota;
            cout << "Este paciente deve se medicar 375mg do medicamento, igual a " << dosagem << " gotas." << endl;
        }
        if (peso > 24 && peso <= 30)
        {
            dosagem = 500 / gota;
            cout << "Este paciente deve se medicar 500mg do medicamento, igual a " << dosagem << " gotas." << endl;
        }
        if (peso > 30)
        {
            dosagem = 750/gota;
            cout << "Este paciente deve se medicar 750mg do medicamento, igual a " << dosagem << " gotas." << endl;
        }
    }

    return 0;
}