#include<iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while(n != 0)
    {
        int last = n%10;
        rev = rev*10 + last;
        n = n/10;
    }
    return rev;
}

void sayDigit(int n)
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n == 0)
    {
        return;
    }

    int lastDigit = n%10;
    for(int i=0; i<10; i++)
    {
        if(lastDigit == i)
        {
            cout<<arr[i]<<" ";
        }
    }

    sayDigit(n/10);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int rev = reverse(n);
    sayDigit(rev);

    return 0;
}