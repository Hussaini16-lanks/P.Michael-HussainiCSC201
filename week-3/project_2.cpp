//Swap the values of 2 integers using a temporary variable
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Before swapping: a = "<<a<<" and b = "<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping: a = "<<a<<" and b = "<<b<<endl;

    return 0;
}