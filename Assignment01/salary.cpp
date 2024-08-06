#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number, worked_hours;
    float hourly_wage;

    cin >> number >> worked_hours >> hourly_wage;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << hourly_wage * worked_hours << endl;

    return 0;
}