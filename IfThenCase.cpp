#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if (a < 10)
    {cout << "satuan";}
    else if (a < 100)
    {cout << "puluhan";}
    else if (a < 1000)
    {cout << "ratusan";}
    else if (a < 10000)
    {cout << "ribuan";}
    else if (a < 100000)
    {cout << "puluhribuan";}
}