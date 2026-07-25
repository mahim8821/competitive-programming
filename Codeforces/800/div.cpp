#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        if (1600 <= i && i <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (1400 <= i && i <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (i <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (1900 <= i)
        {
            cout << "Division 1" << endl;
        }

        else
            cout << "" << endl;
    }

    return 0;
}