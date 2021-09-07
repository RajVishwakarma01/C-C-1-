//Program for Display Reverse of a number and show a reverse number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;
    temp=n;
    while(n>0)
    {

        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    cout<<"Reversed Number is = "<<sum<<endl<<endl;
    if(temp==sum)
       cout<<"Number is palindrome."<<endl;
    else
       cout<<"Number is not palindrome."<<endl;

    return 0;
}
