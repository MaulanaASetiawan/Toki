#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x[a][b], y[b][c], z[a][c];

    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin >> x[i][j];
        }
    }
    for (int j = 0; j < b; j++){
        for (int k = 0; k < c; k++){
            cin >> y[j][k];
        }
    }
    for (int i = 0; i < a; i++){
        for (int k = 0; k < c; k++){
            z[i][k] = 0;
            for (int j = 0; j < b; j++){
                z[i][k] += x[i][j] * y[j][k];
            }
        }
    }
    for (int i = 0; i < a; i++){
        for (int k = 0; k < c; k++){
            cout << z[i][k] << " ";
        }
        cout << "\n";
    }
}