//“A Program for given number is prime or not”
#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cout<<"Enter number for check whether it is prime or not : ";
    cin>>n;

     for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout <<n<<" is a Prime number" << endl;
    }
    else
    {
         cout <<n<<" is not a Prime number" << endl;
    }
    return 0;
}
