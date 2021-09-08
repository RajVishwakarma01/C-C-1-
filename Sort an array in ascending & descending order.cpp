//Sort an array element in ascending and descending order.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element :- "<<endl;
    int i,j,temp,k;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Ascending Order :"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}



	cout<<"Descending Order :"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
    return 0;
}
