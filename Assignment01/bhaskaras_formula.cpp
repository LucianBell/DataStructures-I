#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string input;
    double a, b, c, r1, r2;
    double delta;

    getline(cin, input);
    stringstream ss(input);
    ss >> a >> b >> c;

    delta = (b * b) - (4 * a * c);

    if (a == 0 || delta < 0)
    {
        cout << "Impossivel calcular\n";
    }
    else
    {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }

    return 0;
}
