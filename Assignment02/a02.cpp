/*
Write a program that reads a number N. This N is the size of a array X[N].
Next, read each of the numbers of X, find the smallest element of this array and
its position within the array, printing this information.

Input
The first line of input contains one integer N (1 < N <1000), indicating the number
of elements that should be read to an array X[N] of integer numbers. The second row
contains each of the N values, separated by a space. Remember that no input will have repeated numbers.

Output
The first line displays the message “Menor valor:” followed by a space and the lowest number
read in the input. The second line displays the message “Posicao:” followed by a space
and the array position in which the lowest number is, remembering that the array starts at the zero position.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;

    while (n == 0 || n > 1000)
    {
        cin >> n;
    }

    int x[n];
    int lowest;
    int index;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (i == 0)
        {
            lowest = x[i];
            index = i;
        }
        else
        {
            if (lowest > x[i])
            {
                lowest = x[i];
                index = i;
            }
        }
    }

    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << index << endl;
}