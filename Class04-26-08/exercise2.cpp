#include <iostream>
#include <cassert>

using namespace std;

float imc(float altura, float peso)
{
    return (peso / (altura * altura));
}

int main()
{

    float altura = 1.70;
    float peso = 72.6;

    float imc_pronto = imc(altura, peso);
    cout << imc_pronto;

    return 0;
}
