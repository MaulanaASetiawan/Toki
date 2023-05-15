#include <bits/stdc++.h>
using namespace std;

int f(int a, int b, int x, int y){
    if (x == 0){
        return x;
    }
    return (a, b, x -1, abs(a*y+b));
}

int main()
{
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    cout << f(a,b,x,y) << endl;
    return 0;
}