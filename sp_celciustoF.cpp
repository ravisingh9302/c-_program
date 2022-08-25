#include <iostream>
using namespace std;

int main()
{
    // string e ="°";
    float a, b, c;
    cout << endl
         << endl;
    cout << "Enter Temp in celsius:" << endl;
    cin >> a;
    b = (a * 1.8) + 32;
    cout << "The temp " << a<<"celcius is now converted into Fahrenheit is " << b <<"F"<< endl;

    return 0;
}