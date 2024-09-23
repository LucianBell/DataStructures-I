#include <iostream>
#include <cassert>

using namespace std;

void paraCelsius(float &temp)
{
    temp = (temp * 9 / 5) + 32;
}

void paraFar(float &temp)
{
    temp = (temp - 32) * 5 / 9;
}

int main()
{

    float temp = 1;

    paraCelsius(temp);
    cout << temp << endl;

    paraFar(temp);
    cout << temp << endl;

    return 0;
}
