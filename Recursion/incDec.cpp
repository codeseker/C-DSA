#include<iostream>
using namespace std;

void increasing(int n)
{
    if(n < 1)
    {
        return;
    }
    increasing(n-1);
    cout<<n<<endl;
}

void decreasing(int n)
{
    if(n < 1)
    {
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
}

int main()
{
    increasing(5);
    cout<<endl;
    decreasing(5);
    return 0;
}