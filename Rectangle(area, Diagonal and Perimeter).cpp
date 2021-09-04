//“Program for Calculating area, Diagonal and Perimeter of Rectangle”
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int l,w,area,d,d1,p;
	cout<<"Enter the length of ractangle : ";
	cin>>l;
	cout<<"Enter the width of ractangle : ";
	cin>>w;
	area = w*l;
	cout<<endl;
	cout<<"Area of rectangle is = "<<area<<endl<<endl;
	d1 = pow(w,2) + pow(l,2);
	d = sqrt(d1);
	cout<<"Diagonal of rectangle is = "<<d<<endl<<endl;
	p = 2 * (l + w);
	cout<<"Perimeter of rectangle is = "<<p<<endl<<endl;
	return 0;
}
