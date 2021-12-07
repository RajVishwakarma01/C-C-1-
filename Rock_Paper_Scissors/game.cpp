#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;



int main()
{
    srand(time(NULL));
    cout<<"\n\n********  Wellcome  ********\n\n";
    cout<<"1 - ROCK\n2 - PAPER\n3 - Scissors\n";
    cout<<"Pick any one : ";

    int userChoice;
    cin>>userChoice;

    int cpuChoice = (rand() % 3) + 1;

    switch (userChoice)
    {
    case 1:
        cout<<"\nYou picked Rock."<<endl;
        break;
    case 2:
        cout<<"You picked Paper."<<endl;
        break;
    case 3:
        cout<<"You picked Scissors."<<endl;
        break;
    
    default:
    cout<<"\nInvalid Choice."<<endl;
        break;
    }

    

    //CPU
    switch (cpuChoice)
    {
    case 1:
        cout<<"\nCPU picked Rock."<<endl;
        break;
    case 2:
        cout<<"\nCPU picked Paper."<<endl;
        break;
    case 3:
        cout<<"\nCPU picked Scissors."<<endl;
        break;
    
    default:
    cout<<"\nInvalid Choice."<<endl;
        break;
    }

    //logic
    if(userChoice == cpuChoice)
    {
        cout<<"\n!....It's a tie....!"<<endl;
    }

    if(userChoice == 1)
    {
        if(cpuChoice == 2)
        {
            cout<<"\n!....You Lose....!"<<endl;
        }
        else if (cpuChoice == 3)
        {
            cout<<"\n!....You Win....!"<<endl;
        }
        
    }
    else if(userChoice == 2)
    {
        if(cpuChoice == 1)
        {
            cout<<"\n!....You Win....!"<<endl;
        }
        else if(cpuChoice == 3)
        {
            cout<<"\n!....You Lose....!"<<endl;
        }
    }
    else if(userChoice == 3)
    {
        if (cpuChoice == 1)
        {
            cout<<"\n!....You Lose....!"<<endl;
        }
        else if(cpuChoice == 2)
        {
            cout<<"\n!....You Win....!"<<endl;
        }
        
    }

    cout<<"\n\n!....Thanks for playing....!\n\n";


    return 0;    
}
