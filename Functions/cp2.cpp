/*Write a function called doubleNumber() that takes one integer parameter.
The function should return double the value of the parameter.*/
#include<iostream>
using namespace std;
int doubleNumber(int a){
    return a*2;
}
int main(){
    int x;
    cout<<"Enter an integer you want to double: ";
    cin>>x;
    cout<<x<<"\n"<<doubleNumber(x);
    return 0;
}