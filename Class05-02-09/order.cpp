#include <utility>
/*
    Template serve para criarmos uma função com
    tipo de dado genérico
*/
template <typename T> // T é o nome do meu template

void bubblesort(T vet[], int n)
{
    bool troca = false;

    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                std::swap(vet[i], vet[i + 1]);
                troca = true;
            }
        }
    } while (troca);
}

template <typename T>
void insertionSort(T vet[], int n)
{
    for (int i = 1; i < n; i++)
    {
        T key = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j] > key)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = key;
    }
}