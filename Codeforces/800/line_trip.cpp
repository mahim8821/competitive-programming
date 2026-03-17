#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        int mx = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            int diff = p[i] - p[i - 1];
            mx = max(mx, diff);
        }
        mx = max(mx, p[0] - 0);
        mx = max(mx, 2 * (x - p[n - 1]));
        cout << mx << endl;
    }

    return 0;
}