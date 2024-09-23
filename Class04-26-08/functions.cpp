#include <iostream>
using namespace std;

int global = 0; // Exemplo de variável global

int adiciona(int x, int y)
{
    int t = x + y;
    return t;
}

int main()
{
    int t = 500; // Escopo de variaveis locais (essas só na main,aquelas só ali na função adiciona)
    int x = 10, y = 2;

    int soma = adiciona(x, y);
    cout << "Soma : " << soma << endl;
    cout << "Valor de t: " << t << endl;
    /*Apenas para mostrar que a variável t da main não é a mesma da variavel t da função adiciona
    VARIAVEIS LOCAIS
    */

    return 0;
}
