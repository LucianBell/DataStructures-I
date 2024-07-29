// Entrada e saída de dados em cpp
#include <iostream>
using namespace std;

int main()
{
    /*
    cin -> Char. input
    */
    int age;
    float height;

    cout << "Tell me your age: ";
    cin >> age;

    cout << "Tell me your height: ";
    cin >> height;

    cout << "Your age is " << age << endl;
    cout << "Your height is " << height << " meters" << endl;

    return 0;
}
