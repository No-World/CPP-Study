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
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < a.size() - 1; i++)
    { //     能分解就分解
        //   大于10        十位小于等于个位        是第一个数或者前面的数小于等于十位    后面的数大于等于个位
        if (a[i] > 9 && a[i] / 10 <= a[i] % 10 && (!i || a[i - 1] <= a[i] / 10) && a[i] % 10 <= a[i + 1])
        {
            a.insert(a.begin() + i + 1, a[i] % 10);
            a[i++] /= 10;
        }
        // 当执行所有分解后当前数仍然大于后一位数时，说明无法构造
        if (a[i] > a[i + 1])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
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