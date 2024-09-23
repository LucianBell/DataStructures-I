#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b;

    cin >> a >> b;
    // Standard precision is 5 numbers after the .
    // fixed -> round number
    cout << "The result is: " << fixed << setprecision(2) << a / b;

    return 0;
}
