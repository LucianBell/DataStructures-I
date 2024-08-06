/*
Read an integer N, which represents the number of following test cases.
Each test case consists of three floating-point numbers, each one with one digit after the decimal point.
Print the weighted average for each of these sets of three numbers, considering that the first number has weight
2, the second number has weight 3 and the third number has weight 5.

Input
The input file contains an integer number N in the first line.
Each N following line is a test case with three float-point numbers,
each one with one digit after the decimal point.

Output
For each test case, print the weighted average according with below example.
*/

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int use_cases;
    const int w1 = 2, w2 = 3, w3 = 5;
    float num_1, num_2, num_3, weighted_average;
    string input;

    cin >> use_cases;
    cin.ignore();

    for (int i = 0; i < use_cases; i++)
    {
        getline(cin, input);
        stringstream ss(input);
        ss >> num_1 >> num_2 >> num_3;

        weighted_average = ((num_1 * w1) + (num_2 * w2) + (num_3 * w3)) / (w1 + w2 + w3);
        weighted_average = round(weighted_average * 10) / 10;

        cout << fixed << setprecision(1) << weighted_average;
        cout << "\n";
    }

    return 0;
}
