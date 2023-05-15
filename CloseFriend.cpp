#include <bits/stdc++.h>
using namespace std;

int f(int a, int b, int c, int d, int e){
    return pow(abs(a-c), e) + pow(abs(b-d), e);
}

int main()
{
    int n, e, t, min = 100000001, mx = 0, x[10001], y[10001];
    cin >> n; cin >> e;
    for (int  i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            t = f(x[i], y[i], x[j], y[j], e);
            if (t < min){
                min = t;
            }
            if (t > mx){
                mx = t;
            }
        }
    }
    cout << min << " " << mx;
    return 0;
}
// error
