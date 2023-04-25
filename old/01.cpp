#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <unordered_map>
#include <cstdlib>
using namespace std;
using i64 = long long;
typedef long long ll;
ll n, k, m;
const int N = 2e6 + 10;
void solve()
{
    cin >> n;
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    else if (n % 2 != 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << n - i + 1 << " ";
            }
            else
            {
                cout << i - 1 << " ";
            }
        }
        cout << '\n';
    }
    return;
}
int main()
{
    int T;
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}