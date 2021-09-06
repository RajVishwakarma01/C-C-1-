// “A program for finding the given number is odd or even and first number is divisible by second using Switch Case Statement”
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Press (1) for Finding Even Odd "<<endl;
    cout<<"Press (2) for first number is divisible by second or not "<<endl;
    cin>>n;
    cout<<endl;
    switch (n,n)
    {
    case 1 :
    {
        int num;
        cout<<"Enter a number : ";
        cin>>num;

        switch (num % 2)
        {
        case 0 :
        cout<<"Number is Even ";
            break;
            default:
            cout<<"Number is Odd ";
            break;
        }
    }
        break;
    case 2 :
    {
        int n1,n2;
        cout<<"Enter two number : "<<endl;
        cin>>n1>>n2;
        switch(n1 % n2)
        {
            case 0:
            cout<<n1<<" is divisible by "<<n2;
            break;
            default:
            cout<<n1<<" is not divisible by "<<n2;
            break;
        }

    }
    break;
    default :
    cout<<"Invalid Input ";
    break;
    }
    return 0;
}
