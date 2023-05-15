#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    float n;
    cin >> n;

    if (n == trunc(n))
    {
        n = trunc(n);
        cout << n << " " << n << endl;
    }
    else if (n > 0){
        a = trunc(n);
        cout << a << " " << a+1 << endl;
    }
    else if (n < 0){
        b = trunc(n);
        cout << b-1 << " " << b << endl; 
    }

    return 0;
}