#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float vet[]{10.133, 3.124, 4.551, 6.337};
    float soma = 0;
    for (int i = 0; i < 4; i++)
    {
        soma += vet[i];
    }

    cout << fixed << setprecision(4) << soma << endl;

    return 0;
}
