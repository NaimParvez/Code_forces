#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    vector<int>coin(number);
    int x;
    for (int i = 0; i < number; i++)
    {
       cin>>x;
       coin.push_back(x);
    }
    sort(coin.rbegin(),coin.rend());
   
    for(int i=0;i<number;i++)
    {
        int sum1=0,sum2=0;

        for(int j=0;j<=i;j++)
        {
            sum1+=coin[j];

        }
        for(int k=i+1;k<number;k++)
        {
          sum2+=coin[k];
        }
        if(sum1>sum2){
            cout<<++i;
            return 0;
        }
    }
    
}