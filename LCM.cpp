#include<iostream>

using namespace std ;

int main()
{
    int a,b,lcm,r;

    cout<<"Enter two Numbers: "<<endl;
    cin>>a>>b;

    while(true)
    {
        lcm=a;
        r=a%b;
        if(r==0)
        {
            break;
        }
        a=a*2;
    }
    cout<<"LCM is :"<<lcm;
}