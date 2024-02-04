// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

PII inter(PII x, PII y)
{
    return {max(x.first, y.first), min(x.second, y.second)};
}

void Solution(int __T)
{
    int n;
    scanf("%d\n", &n);
    vector<PII> a(n);
    for (auto &[l, r] : a)
    {
        scanf("%d%d\n", &l, &r);
    }
    int l = -1;
    int r = 1e9;
    while (r - l > 1)
    {
        int m = (r + l) / 2;
        pair<int, int> f = {0, 0};
        bool good = 1;
        for (int j = 0; j < n; j++)
        {
            f.first -= m;
            f.second += m;
            f = inter(f, a[j]);
            if (f.second < f.first)
            {
                good = 0;
            }
        }
        if (good)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    printf("%d\n", r);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}