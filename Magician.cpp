#include <bits/stdc++.h>
#define ll long long
using namespace std;

void swap(ll &a, ll &b) {
    ll temp = a;
    a = b;
    b = temp;
}
int main()
{
    ll n; 
    cin >> n;
    ll arr[2][n];
    for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++){
        char X,Y;
        ll a,b;
        cin >> X >> a >> Y >> b;

        ll x = X - 'A';
        ll y = Y - 'A';
        a-- ,b--;
        swap(arr[x][a], arr[y][b]);
    }

    for (ll i = 0; i < 2; i++){
        for (ll j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}