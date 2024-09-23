#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string nome;

    cout << "Tell me your name: ";
    // cin >> nome; -- Entrada até o espaço
    getline(cin, nome);
    cout << "Your name is: " << nome;

    return 0;
}
