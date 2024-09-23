#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int array[] = {8, 3, 1, 9, 7, 4, 2, 6, 5}, n = 9; // Declarando array

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(array[min_index], array[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }

    return 0;
}
