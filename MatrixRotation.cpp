#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int x[a+1][b+1];

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++) {
            cin >> x[i][j];
        }
    }
    for (int j = 1; j <= b; j++) {
        for (int i = a; i >= 1; i--){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}