#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    string ra, vi, si;
    cout << "Enter the any word" << endl;
    //cin >> ra;// cin only aceppt one word from sentence.
    getline(cin, ra, '\n');
    cout << endl;
    a = ra.length();
    cout<<"string is: "<<ra<<endl;
    cout << "Result: " << a;
    cout << endl;

    return 0;
}


/*int main() {
    string s;
    cout<<"enter the string"<<endl;
    getline( cin, s, '\n' );
     cout << s << endl;
 }*/