#include <iostream>
using namespace std;

int main()
{
    int a,N, hasil = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        hasil += a;
    }
    cout << hasil << endl;
}