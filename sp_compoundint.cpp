#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f;
    cout << "Enter the principal amount" << endl;
    cin >> a;
    cout << "Enter the rate of interest" << endl;
    cin >> b;
    cout << "Enter the time period in (years)" << endl;
    cin >> c;
    d = b / 100;

    for (int i = 0; i < c; i++)
    {
        e = a*(1 + d);
        a = e;
    }
    cout << "your amount after " << c << " years will becomes Rs. " << a << endl;
    return 0;
}