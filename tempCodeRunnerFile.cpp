#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<long long> mahim = {1, 2, 3, 4};
    cout << "This is nim:" << mahim[3] << endl;
    mahim.push_back(6);
    cout << "Size of vector: " << mahim.size() << endl;
    for (int i : mahim)
    {
        cout << "all array:" << i << endl;
    }
    return 0;
}