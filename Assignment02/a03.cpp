#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n = -1;

    while (n != 0)
    {
        cin >> n;

        // Calcular o maior número na matriz para definir o espaçamento adequado
        int max_num = pow(2, (2 * n) - 2);
        int width = log10(max_num) + 1; // Número de dígitos do maior número

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << setw(width) << pow(2, i + j - 2) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
