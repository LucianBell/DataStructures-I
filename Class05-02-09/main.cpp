#include <iostream>
#include <cassert>
#include "order.cpp"

using namespace std;

int main()
{
    int vetor[5]{5, 4, 3, 2, 1};

    bubblesort(vetor, 5);
    assert(vetor[0] == 1 && vetor[1] == 2 && vetor[2] == 3 && vetor[3] == 4 && vetor[4] == 5);
    cout << "Okay!" << endl;

    return 0;
}
