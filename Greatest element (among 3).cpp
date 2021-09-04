//"Program for input three number and find the greatest element using Simple if, Nested if………else, if…..else if……..if Statement.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Find the greatest element among 3 :- "<<endl<<endl;
	cout<<"Enter the three number's : "<<endl;
	cin>>a>>b>>c;

      if(a == b && b == c && c == a && c == b)
	  {
		cout<<"All are equal "<<endl;
	  }
      else if(a > b && a > c)
      {
      	cout<<a<<" is greater "<<endl;
	  }
	  else if(b > a && b > c)
      {
      	cout<<b<<" is greater "<<endl;
	  }
	  else
      {
      	cout<<c<<" is greater "<<endl;
	  }
	return 0;
}

