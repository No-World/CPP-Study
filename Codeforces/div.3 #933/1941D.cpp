// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, bool> mp, mp1;

void Solution(int __T)
{
    // 注意数组大小
    int n, m, x;
    scanf("%d%d%d", &n, &m, &x);
    mp.clear(), mp1.clear();
    mp[x] = 1;
    while (m--)
    {
        int x;
        char y;
        scanf("%d %c", &x, &y);
        if (y == '1')
        {
            for (auto it : mp)
            {
                int z = (it.first + n - x) % n;
                mp1[(z == 0 ? n : z)] = 1;
            }
        }
        else if (y == '0')
        {
            for (auto it : mp)
            {
                int z = (it.first + x) % n;
                mp1[(z == 0 ? n : z)] = 1;
            }
        }
        else
        {
            for (auto it : mp)
            {
                int z1 = (it.first + x) % n, z2 = (it.first + n - x) % n;
                mp1[(z1 == 0 ? n : z1)] = 1;
                mp1[(z2 == 0 ? n : z2)] = 1;
            }
        }
        mp = mp1;
        mp1.clear();
    }
    printf("%d\n", mp.size());
    for (auto it : mp)
    {
        printf("%d ", it.first);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}