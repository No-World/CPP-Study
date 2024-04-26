// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
#include <cmath>
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
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int n = 23333333;
    // 0出现的次数比1少
    for (int i = 1; i < n / 2; ++i)
    {
        //      0的占比         1的占比                 当前占比的信息熵
        double a = i * 1.0 / n, b = (n - i) * 1.0 / n, res;
        res = -(a * log2(a) * i) - b * log2(b) * (n - i);
        // 信息熵为11625907.5798
        if (fabs(res - 11625907.5798) < 0.0001)
        {
            printf("%d\n", i);
            return;
        }
    }
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