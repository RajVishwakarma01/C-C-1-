//Display the first and last element of array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element :- "<<endl;
    int i;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"First element of array is = "<<arr[0]<<endl;
    cout<<"Last element of array is = "<<arr[n-1]<<endl;


    return 0;
}
