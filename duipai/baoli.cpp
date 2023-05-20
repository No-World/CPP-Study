#include "bits/stdc++.h"

using namespace std;
using i64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int N = 1E6;

    for (int i = 0; i <= x; i++)
    {
        int c = y - (i * 1000);
        if (c % 2500 == 0)
        {
            int j = c / 2500;
            if (j <= x - i)
            {
                cout << x - i - j << ' ' << i << ' ' << j << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';

    return 0;
}