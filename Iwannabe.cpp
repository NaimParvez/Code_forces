#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int level;
    cin>>level;
    vector<bool>check(level,false);
    int x;
    cin>>x;
    int s;
    for(int i=0;i<x;i++)
    {
        cin>>s;
        check[s-1]=true;
    }
    int y;
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>s;
        check[s-1]=true;
    }
    for(auto x:check){
        if(x==false)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";

}
