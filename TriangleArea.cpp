#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b;
    double c;
    cin >> a >> b;
    c = 0.5*(a*b);
    cout << fixed << setprecision(2) <<  c << endl;
}