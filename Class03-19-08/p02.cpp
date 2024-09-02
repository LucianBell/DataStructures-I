// Defining a vector and searching for a number in it
#include <iostream>

using namespace std;

int main()
{
    const int N = 3;
    int vet[N];
    cout << "Digite " << N << " valores\n";

    for (int i = 0; i < N; i++)
    {
        cin >> vet[i];
    }

    cout << "\n";

    for (int i = 0; i < N; i++)
    {
        cout << "Vetor[" << i << "] -> " << vet[i] << endl;
    }

    cout << "\n";

    for (int i = (N - 1); i >= 0; i--)
    {
        cout << "Vetor[" << i << "] -> " << vet[i] << endl;
    }

    return 0;
}
