#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i == 1)
        {
            cout << "I hate ";
        }
        else if (i % 2 != 0)
        {
            cout << "that I hate ";
        }
        else
        {
            cout << "that I love ";
        }
    }
    cout << "it" << endl;

    return 0;
}