#include <iostream>
using namespace std;

int main()
{
    char ravi;
    cout << endl
         << endl;
    cout << "Enter the Alphabet to check is it Vowel or not." << endl;
    cin >> ravi;

    if (ravi=='a' || ravi=='e' || ravi=='i'|| ravi=='o' || ravi=='u')
    {
        cout<<"The character " << ravi<<" you Enter is a VOWEL"<<endl;
        
    }
    else if (ravi=='A' || ravi=='E' || ravi=='I'|| ravi=='O' || ravi=='U')
    {
        cout<<"The character " << ravi<<" you Enter is a VOWEL"<<endl;
    }
    else{
        cout<<"The character you enter is not a vowel"<<endl;
    }

    return 0;
}