#include <iostream>
using namespace std;

int factorial(int n)
{
    // base casse
    if (n == 1)
    {
        return 1;
    }

    int ans = n * factorial(n - 1);
    return ans;
}



int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
}