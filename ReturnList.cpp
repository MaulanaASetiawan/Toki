#include <iostream>
using namespace std;

int main()
{
    int a[101], b = 0;
    while (cin >> a[b])
    {
        b++;
    }
    for (int i = b-1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
}