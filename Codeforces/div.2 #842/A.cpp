#include <bits/stdc++.h>
using namespace std;
long long a[] = {1,2,23,29,31,46,47,58};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long k;
        cin >> k;
        bool b = true;
        for (int i = 0; i < 8; i++)
        {
            if (k == a[i])
            {
                b = false;
            }
        }
        
        if (!b)
        {
            cout << "-1\n";
        }
        else
        {
            cout << k - 1 << endl;
        }
    }
    return 0;
}