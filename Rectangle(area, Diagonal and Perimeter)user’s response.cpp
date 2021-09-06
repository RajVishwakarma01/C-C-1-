//“Program for input choice from user for calculating the Area, Perimeter and Diagonal of rectangle and display it on to the screen according to user’s response”
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

	cout<<endl<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	area = w*l;
	d1 = pow(w,2) + pow(l,2);
	d = sqrt(d1);
	p = 2 * (l + w);

	int n;
	cout<<"Press 1 for display Area "<<endl;
	cout<<"Press 2 for display Diagonal "<<endl;
	cout<<"Press 3 for display Perimeter "<<endl<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	cin>>n;

	switch(n)
	{
	case 1:
	cout<<"Area of rectangle is = "<<area;
	   break;
	case 2:
	cout<<"Diagonal of rectangle is = "<<d;
	   break;
	case 3:
	cout<<"Perimeter of rectangle is = "<<p;
	   break;
	default:
	cout<<"Invalid input \a";
	   break;
	}
	cout<<endl<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	return 0;
}
