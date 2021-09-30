#include <iostream>  
using namespace std;  
int count(int n)
{
	int count = 0;
	do
{
    count++;
    n /= 10;
} while(n != 0);   
return count;
   
}
int sum(int n)
{
	int sum=0,m;
	while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}   
return sum; 

}
int main()  
{  
int n;    
cout<<"Enter a number : ";    
cin>>n;    
 cout<<"Count is = "<<count(n)<<endl;
 cout<<"Sum is = "<<sum(n)<<endl;

    
return 0;  
}  
