#include<iostream>

using namespace std;

int main()
{
    int i,j;
    char C='A';

    for(i=1;i<=5;i++)
    {
        C='A';
        for(j=1;j<=5;j++)
        {
            if(j<=i )
            {
                cout<<C;
                C++;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
}