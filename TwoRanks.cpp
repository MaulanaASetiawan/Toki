#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a % 2 == 0)
    {
        a /= 2;
    }
    if (a == 1)
    {
        cout << "ya" << endl;
    }
    else
    {
        cout << "bukan" << endl;
    }
}