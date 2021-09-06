//"Program for choice '+', '-', '*', '/', '%' -> Addition, Subtraction, Multiplication, Division, Remainder"
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the two number for operations : "<<endl;
	cin>>a>>b;
	cout<<endl;
	cout<<"Press 1 for Addition (+) : "<<endl;
	cout<<"Press 2 for Subtraction (-) "<<endl;
	cout<<"Press 3 for Multiplication (*) "<<endl;
	cout<<"Press 4 for Division (/) "<<endl;
	cout<<"Press 5 for Remainder (%) "<<endl;
	cout<<endl;
	cout<<"----------------------------------"<<endl<<endl;
    cout<<"Input : ";
	cin>>c;
    cout<<endl;
	switch(c) 
		{
			case 1:
				cout<<"Addition is : "<<a+b;
				break;
				case 2:
					cout<<"Subtraction is : "<<a-b;
					break;
					case 3:
					cout<<"Multiplication is : "<<a*b;
					break;
					case 4:
						cout<<"Division is : "<<a/b;
						break;
						case 5:
							cout<<"Remainder is : "<<a%b;
							break;
							default:
								cout<<"Invalid input \a";
								break;
						
		 } 
}
