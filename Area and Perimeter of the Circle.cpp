//“Write a Program for Calculate Area and Perimeter of the Circle”
#include<iostream>
using namespace std;
int main()
{
	int r;
	float a,c;
	cout<<"Enter the radius of circle : ";
	cin>>r;
	
	a = 3.14*r*r;
	c = 2*3.14*r;
	cout<<"Area of Circle is : "<<a<<endl;
    cout<<"Paramiter of Circle is : "<<c<<endl;
	return 0;
}

