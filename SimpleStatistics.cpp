#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int answer_max = -100001;
    int answer_min = 100001;
    for (int i = 1; i <= a; i++)
    {
        int b;
        cin >> b;
        answer_max = max(answer_max, b);
        answer_min = min(answer_min, b);
    }
    cout << answer_max << " " << answer_min << endl;
}