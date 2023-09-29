#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long number,position;
    cin>>number>>position;
    long long x=1,y=1;
    while(x<=number)
    {
        if(y==position)
        {
            cout<<x;
            return 0;
        }
        x=x+2;
        y++;
    }
    x=2;
    while(x<=number)
    {
        if(y==position)
        {
            cout<<x;
            return 0;
        }
        x=x+2;
        y++;
    }
}

