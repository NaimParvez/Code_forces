#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    for (int i = 0; i < st.size(); i++)
    {
        if(st[i]=='H'||st[i]=='Q'||st[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}