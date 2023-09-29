#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        while(1)
        {
            if(k==0||n==0){
                break;
            }
            if(x>=n){
                x=x-n;
                k--;
            }   
            n--;
        }
        if((x==0&&k==0))
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}