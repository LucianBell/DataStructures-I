#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float M[12][12];
    float result = 0.0;
    int line;
    char operation;

    // Getting line to operate
    cin >> line;

    // Deciding operation
    cin >> operation;

    // Asking for numbers
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (i == line)
            {
                result += M[i][j];
            }
        }
    }

    if (operation == 'S')
    {
        cout << fixed << setprecision(1) << result << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << result / 12 << endl;
    }

    return 0;
}
