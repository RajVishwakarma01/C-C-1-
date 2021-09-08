//Program to reverse an array elements entered by user.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout<<"Reversed array is : "<<endl;
    for(i = n-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
