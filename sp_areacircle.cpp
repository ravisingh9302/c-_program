#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int r,a,c;
    cout<<"Enter the radius of circle (IN cm) "<<endl;
    cin>>r;
    a=3.14*r*r;
    c=2*3.14*r;
    cout<<"The Area of circle of given radius "<<r<<"cm is "<<a<<"sqrt.cm"<<endl;
    cout<<"The Circumference of circle of given radius "<<r<<"cm is "<<c<<"cm"<<endl;

    return 0;
}