#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salary, new_salary;
    int percent;
    cin >> salary;

    if (salary <= 400.00)
    {
        new_salary = salary * 1.15;
        percent = 15;
    }
    else if (salary <= 800.00)
    {
        new_salary = salary * 1.12;
        percent = 12;
    }
    else if (salary <= 1200.00)
    {
        new_salary = salary * 1.10;
        percent = 10;
    }
    else if (salary <= 2000.00)
    {
        new_salary = salary * 1.07;
        percent = 7;
    }
    else
    {
        new_salary = salary * 1.04;
        percent = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << new_salary << "\n";
    cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << "\n";
    cout << "Em percentual: " << percent << " %\n";

    return 0;
}
