#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int CPrime;
        int count = 0;
        cin >> CPrime;

        if (CPrime == 1)
        {
            cout << "YA" << endl;
            continue;
        }
        for (int j = 2; j*j <= CPrime; j++)
        {
            if (CPrime % j == 0)
            {
                count++;
            }
        }
        if (count <= 1)
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "BUKAN" << endl;
        }
    }
    return 0;
}