#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int x;
    cin>>x;
    int y;
    vector<int> vec;
    while(x--)
    {
        cin>>y;
        vec.push_back(y);
    }
    sort(vec.begin(),vec.end());
    for(auto x:vec){
        cout<<x<<" ";
    }
 }
