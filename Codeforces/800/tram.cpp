#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    int in, exit, p = 0, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> in >> exit;
        p = (in + count) - exit;

        if (p < 0)
            count = 0;

        else
            count = p;
    }
    cout << p << endl;
    return 0;
}