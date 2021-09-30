 #include<iostream>
    using namespace std;
int main() {  
    int counter; 
         cout<<"Odd numbers between 1 to 100\n";  

    for(counter = 1; counter <= 100; counter++) {  
     
        if(counter%2 == 1) { 
           
            cout<<counter<<" ";  
        }  
    }  
   
    return 0;  
} 
