// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
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
typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int k, numb = 0;
    string s;
    char a, b;
    cin >> k >> s >> a >> b;
    for (int i = s.length() - 1; i > k - 2; i--)
    {
        numb += (s[i] == b);
    }
    // cout << numb;
    ll ans = 0;
    for (int i = 0; i < s.length() - k + 1; i++)
    {
        if (s[i] == a)
        {
            ans += numb;
        }
        if (s[i + k - 1] == b)
        {
            numb--;
        }
    }
    cout << ans << '\n';
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}