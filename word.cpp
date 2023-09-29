#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;
    int count = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= 65 && st[i] <= 90)
        {
            ++count;
        }
        else
            --count;
    }
    if (count > 0)
    {
        for (int i = 0; i < st.size(); i++)
        {
            cout << (char)toupper(st[i]);
        }
    }
    else
        for (int i = 0; i < st.size(); i++)
        {
            cout << (char)tolower(st[i]);
        }
}