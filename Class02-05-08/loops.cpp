#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Help " << i + 1 << endl;
    }

    cout << "----------------\n";

    int helps = 0;
    while (helps < 10)
    {
        cout << "Help " << helps + 1 << endl;
        helps++;
    }

    cout << "----------------\n";

    helps = 0;
    // This one will execute at least once :)
    do
    {
        cout << "Help " << helps + 1 << endl;
        helps++;
    } while (helps < -1);

    return 0;
}
