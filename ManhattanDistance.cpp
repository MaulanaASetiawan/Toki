#include <iostream>
using namespace std;

int main()
{
    int a1,a2,b1,b2,c1,c2;
    cin >> a1 >> b1 >> a2 >> b2;

    c1 = (a1 - a2);
    c2 = (b1 - b2);
    if (c1 < 0){
        c1 = -1 * c1;
    }
    if (c2 < 0){
        c2 = -1 * c2;
    }
    cout << c1+c2 << endl;
    return 0;
}