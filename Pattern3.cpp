#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b = -1;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            b += 1;
            if (b == 10)
            {
                b = 0;
            }
            cout << b;
        }
        cout << endl;
    }
}