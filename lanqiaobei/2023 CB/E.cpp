// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
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
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int mxlen[100], l[N], r[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        l[i] = s[0] - '0', r[i] = s[s.length() - 1] - '0';
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int x = mxlen[l[i]] + 1;
        mxlen[r[i]] = max(mxlen[r[i]], x);
        ans = max(ans, x);
    }

    cout << n - ans;
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    // ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}