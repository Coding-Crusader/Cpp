/*Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.

The output of the program should match the following (assuming inputs of 6 and 4):

Enter an integer: 6
Enter another integer: 4
6 + 4 is 10.
6 - 4 is 2.*/

#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter an integer: ";
    cin>>num1;
    cout<<"Enter another integer: ";
    cin>>num2;
    cout<<num1<<" + "<<num2<<" is "<<num1+num2<<endl;
    cout<<num1<<" - "<<num2<<" is "<<num1-num2<<endl;
}