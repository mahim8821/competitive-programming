/*
Problem: Halloumi Boxes
Platform: Codeforces
Difficulty: 800
Link: https://codeforces.com/problemset/problem/1903/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, n;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> c_a = a;
        sort(c_a.begin(), c_a.end());
        if (c_a == a || k > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}