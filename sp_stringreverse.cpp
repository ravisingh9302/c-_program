#include <iostream>
using namespace std;
void strrev(string);

int main()
{

    string rav;
    cout << "Enter the string " << endl;

    getline(cin, rav);
    cout<<endl;

    strrev(rav);
    // cout<<rav.length();
    // cout<<rav.at(3);

    return 0;
};


void strrev(string ra)
{
    int a,c;
    char b;
    a = ra.length();
    for (int i = 0; i < a; i++)
    {
        c =((a-i)-1);
        b = ra.at(c);
        cout<<b;
    }

}
