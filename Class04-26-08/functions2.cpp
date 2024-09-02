#include <iostream>
using namespace std;

float adiciona(float a, float b) // Passagem de valor por parâmetro
{
    a += b;
    cout << "Na função adiciona " << a << endl;
}

float adiciona_referencia(float &a, float b) // Passagem de valor por referência
{
    /*
        - Usado quando queremos alterar a variável passada como parâmetro também
        - Usado para evitar consumo de memória
    */
    a += b;
    cout << "Na função adiciona " << a << endl;
}

int main()
{
    float x = 10, y = 0.5;
    // adiciona(x, y);

    adiciona_referencia(x, y);

    cout << "Na main " << x << endl;
    return 0;
}
