#include <iostream>
using namespace std;

bool isPrime(int N)
{
    if (N <= 1)
        return false;
    for (int i = 2; i * i <= N; i++)
        if (N % i == 0)
            return false;
    return true;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if (isPrime(num))
            cout << "YA " << endl;
        else
            cout << "BUKAN " << endl;
    }
    return 0;
}
