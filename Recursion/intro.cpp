#include<iostream>
using namespace std;


void print(int n)
{
    // base case
    // if(n > 5)
    // {
    //     return;
    // }

    cout<<"Hello"<<endl;
    print(n+1);
}

void journey(int i)
{
    if(i == 100)
    {
        cout<<"Reached"<<endl;
        return;
    }
    journey(i+1);
}

int main()
{

    // basic approach
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;

    // for(int i=1; i<=5; i++)
    // {
    //     cout<<"Hello"<<endl;
    // }


    print(1);
    // journey(0);


    return 0;
}