//"A program for Mark sheet Calculations (total, percentage and result) using ternary operator"
#include<iostream>
using namespace std;
int main()
{
	int M1,M2,M3,M4,M5;
	cout<<"Enter M1 Mark : ";
	cin>>M1;
	cout<<"Enter M2 Mark : ";
	cin>>M2;
	cout<<"Enter M3 Mark : ";
	cin>>M3;
	cout<<"Enter M4 Mark : ";
	cin>>M4;
	cout<<"Enter M5 Mark : ";
	cin>>M5;
	
	int total,per,result;
	total = M1+M2+M3+M4+M5;
	
	cout<<"Total Marks is : "<<total<<endl;
	per = (total*100)/500;
	cout<<"Percentage is : "<<per<<endl;
	
    per > 32 ? cout<<"Result : Pass " : cout<<"Result : Fail ";
	return 0;
}
