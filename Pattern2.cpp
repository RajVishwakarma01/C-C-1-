/*
"Write a function in C++ to generate the following Pyramid of Numbers and stars"
							         0
                                    101
								   21012
								  3210123

*/
#include <iostream>  
using namespace std;  
int main()
{
       int i,j;
       

       for ( i=1;i<=4;i++)
       {
           for (j = 1;j<=4-i;j++ )
                cout<<" ";

           for (j = 1;j<=i;j++)
                cout<<i-j;

           for (j = 1;j<= i-1;j++)
                cout<<j;
           
           cout<<"\n";
      }
      return 0;
 }
