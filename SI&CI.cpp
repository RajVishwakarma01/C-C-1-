//“Write a Program for Simple Interest and Compound Interest”
#include <bits/stdc++.h>
using namespace std;
float si()
{
	float p,r,t;
	cout<<"Enter Initial Principal Balance : ";
	cin>>p;
	cout<<"Enter Annual Interest Rate : ";
	cin>>r;
	cout<<"Enter Time (in years) : ";
	cin>>t;
	float si,ci;
	si = (p*r*t)/100;
	si = si+p;
	ci=p*pow((1+r/100),t);
	cout<<"Simple interest is : Rs."<<si<<endl;
	 cout<<"Compound Interest is : Rs."<<ci;
	
}

int main()
{
	si();
	
    return 0;
}
