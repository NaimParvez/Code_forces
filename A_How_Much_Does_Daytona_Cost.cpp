#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
       // vector<int>vec(x);
        int k,flag=0;
        for(int i=0;i<x;i++)
        {
            cin>>k;
            if(k==y){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}