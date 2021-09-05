//"Write a a Program to input Number and Check whether it is even or odd".
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Program check whether number is even or odd :- "<<endl<<endl;
	cout<<"Enter a number : ";
	cin>>num;
	if(num % 2 == 0)
	{
		cout<<"Number is even. ";
	}
	else
	{
		cout<<"Number is odd. ";
	}
	return 0;
}

