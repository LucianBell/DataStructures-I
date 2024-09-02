#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Informe o tamanho do vetor: \n";
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << endl;
    }
    return 0;
}
