#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no;
    cin >> no;
    int a;
    float percent = 0.0;
    for (int i = 0; i < no; i++)
    {
        cin >> a;
        percent = percent + ((float)a / 100);
    }
    cout << (percent / (float)no) * 100;
}