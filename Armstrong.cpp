#include<iostream>

using namespace std;

int main()
{
    int n,r,sum=0,t;

    cout<<"Enter a Number: "<<endl;
    cin>>n;
    t=n;

    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(t==sum)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number"<<endl;
    }
}