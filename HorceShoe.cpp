#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k = 4;
    vector<int> vec;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            b = vec[i];
            k--;
            continue;
        }
        if (b != vec[i])
        {
            b = vec[i];
            k--;
        }
    }
    cout << k;
}