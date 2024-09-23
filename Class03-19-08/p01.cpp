// Defining a vector and searching for a number in it
#include <iostream>

using namespace std;

int main()
{
    int vet[6];
    cout << "Digite 6 valores\n";

    for (int i = 0; i < 6; i++)
    {
        cin >> vet[i];
    }

    /*
    cout << "\n";

    for (int i = 0; i < 6; i++)
    {
        cout << vet[i] << endl;
    }
    */

    cout << "\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Vetor[" << i << "] -> " << vet[i] << endl;
    }

    cout << "\n";

    for (int i = 5; i >= 0; i--)
    {
        cout << "Vetor[" << i << "] -> " << vet[i] << endl;
    }

    return 0;
}
