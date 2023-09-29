#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;
    int x=st[0], y=1;
    for (int i = 1; i < st.size(); i++)
    {

        if (x == st[i])
        {
            ++y;
            if (y == 7)
            {
                cout << "YES";
                return 0;
            }     
        }
        else
        {
            x = st[i];
            y = 1;
        }
    }
    cout << "NO";
}