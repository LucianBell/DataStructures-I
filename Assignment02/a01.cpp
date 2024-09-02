/*
Read a number X. Put this X at the first position of an array N [100]. In each subsequent position (1 up to 99) put
half of the number inserted at the previous position, according to the example below. Print all the vector N.

Input
The input contains a double precision number with four decimal places.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored
in that position. Each number of N[...] must be printed with 4 digits after the decimal point.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    double n[100];

    cin >> x;
    n[0] = x;

    for (int i = 1; i < 100; i++)
    {
        x = x / 2;
        n[i] = x;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
    }

    return 0;
}
