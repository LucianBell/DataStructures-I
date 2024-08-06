#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Day of the week: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda" << endl;
        break;
    case 3:
        cout << "Terça" << endl;
        break;
    case 4:
        cout << "Quarta" << endl;
        break;
    case 5:
        cout << "Quinta" << endl;
        break;
    case 6:
        cout << "Sexta" << endl;
        break;
    case 7:
        cout << "Sabado" << endl;
        break;
    default:
        cout << "Número inválido. Inserir outro número" << endl;
    }

    return 0;
}
