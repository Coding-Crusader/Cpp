/*First Program
Modify the solution to the “best solution” program above so that it outputs like this (assuming user input 4):
Enter an integer: 4
Double 4 is: 8
Triple 4 is: 12*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<"Double "<<num<<" is: "<<2*num<<endl;
    cout<<"Triple "<<num<<" is: "<<3*num<<endl;

}
