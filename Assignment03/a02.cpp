#include <iostream>
#include <iomanip>

using namespace std;

int bubble_sort(string array[], int tam)
{
    bool troca = false;
    do
    {
        troca = false;
        for (int i = 0; i < tam - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                troca = true;
            }
        }

    } while (troca);

    return 0;
};

int main()
{
    int num_students, raffled;

    cin >> num_students >> raffled;
    string students[num_students];

    for (int i = 0; i < num_students; i++)
    {
        cin >> students[i];
    }

    bubble_sort(students, num_students);

    cout << students[raffled - 1] << endl;

    return 0;
}
