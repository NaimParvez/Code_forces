#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    int arr[4];
    year++;
    while (1)
    {
        int k = -1;
        int n = year;
        int a = n % 10;
        n /= 10;
        int b = n % 10;
        n /= 10;
        int c = n % 10;
        n /= 10;
        int d = n % 10;
        if (a == b || a == c || a == d || b == c || b == d || c == d)
        {
            year++;
        }
        else
        {
            cout << year;
            break;
        }
    }
}