#include <iostream>
#include <iomanip>

using namespace std;

void insertion(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] < key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

int main()
{
    int num_partic, num_queries;
    cin >> num_partic >> num_queries;

    int array_grades[num_partic];
    int queries[num_queries];

    for (int i = 0; i < num_partic; i++)
    {
        cin >> array_grades[i];
    }

    insertion(array_grades, num_partic);

    for (int i = 0; i < num_queries; i++)
    {
        cin >> queries[i];
    }

    for (int i = 0; i < num_queries; i++)
    {
        cout << array_grades[queries[i] - 1] << endl;
    }

    return 0;
}
