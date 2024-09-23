#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    int array[] = {8, 3, 1, 9, 7, 4, 2, 6, 5}, n = 9; // Declarando array
    bool troca = false;                               // Declarando variável de controle (se foi feita alguma troca)

    // Loop externo, garantindo que vamos checar o array no mínimo uma vez
    do
    {
        troca = false; // troca recebe false sempre que o loop externo recomeça (nova iteração sobre o array)
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1]) // Se o item da frente for menor...
            {
                swap(array[i], array[i + 1]); // Troca ele pelo de trás
                troca = true;                 // Atualiza troca (só vai terminar quando trocar finalizar com false)
            }
        }
    } while (troca);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }

    return 0;
}
