#include <iostream>
#include <cassert>
#include "functions3.cpp"
using namespace std;

int main()
{
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(2) == 2);
    assert(fatorial(3) == 6);
    assert(fatorial(4) == 24);
    assert(fatorial(5) == 120);
    assert(fatorial(6) == 120);

    cout << "Passed\n";
    return 0;
}
