#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    if (n == 1)
    {
        cout << "I hate it";
        return 0;
    }
    while (k <= n)
    {
        if ((k) % 2 == 0)
        {
            k++;
            cout << "I love ";
        }
        else
        {
            k++;
            cout << "I hate ";
        }
        if (k <= n)
            cout << "that ";
    }
    cout << "it";
}