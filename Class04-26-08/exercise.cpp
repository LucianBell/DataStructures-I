#include <iostream>
#include <cassert>

using namespace std;

bool primo(int n)
{
    for (int i = n; i > 2; i--)
    {
        if (n % (i - 1) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    assert(primo(10) == false);
    assert(primo(89) == true);
    assert(primo(1) == true);

    cout << "Passed\n";
    return 0;
}
