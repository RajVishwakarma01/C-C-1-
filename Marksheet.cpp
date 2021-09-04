//“Write a Program for B.Tech. Mark sheet calculation (Total, Percentage and Result)”
#include<iostream>
using namespace std;
int main()
{
	int M1,Mm,M3,Mv,M5;
	cout<<"Enter M1 Mark : ";
	cin>>M1;
	cout<<"Enter Mm Mark : ";
	cin>>Mm;
	cout<<"Enter M3 Mark : ";
	cin>>M3;
	cout<<"Enter Mv Mark : ";
	cin>>Mv;
	cout<<"Enter M5 Mark : ";
	cin>>M5;
	
	int total,per,result;
	total = M1+Mm+M3+Mv+M5;
	cout<<"Total Marks is : "<<total<<endl;
	per = (total*100)/500;
	cout<<"Percentage is : "<<per<<endl;
	if (per>33)
	{
		cout<<"Result : Pass";
	}
	else
	{
		cout<<"Result : Fail";
	}
	return 0;
}
