#include <iostream>
using namespace std;

int main()
{
    int a, b, mod = 0, mx = 0;
    int N[1001] = {0};
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        N[b]++;
        if (N[b] > mx)
        {
            mx = N[b];
            mod = b;
        }
        else if (N[b] == mx && b > mod)
        {
            mod = b;
        }
    }
    cout << mod << endl;
    return 0;
}