#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int array[] = {8, 3, 1, 9, 7, 4, 2, 6, 5}, n = 9; // Declarando array

    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }

    return 0;
}
