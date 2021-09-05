//"a to Input Year Write a Program and Check whether it is Leap Year or not".
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Program to check whether year is Leap Year or not :- "<<endl<<endl;
	cout<<"Enter any year : ";
	cin>>year;
	
	if((year % 400 == 0) && (year % 100 != 0) || (year % 4 == 0))
	{
		cout<<year<<" is leap year.";
	}
	else
	{
		cout<<year<<" is not leap year.";
	}
	return 0;
}
