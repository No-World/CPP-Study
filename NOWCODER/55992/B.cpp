// Problem: Infinite String Comparision
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55992/F
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;
string a, b;
inline void Solution()
{
    // cin >> a >> b;
    int lena = a.length(), lenb = b.length(), mx = max(lena, lenb) * 2, x = 0, y = 0;
    for (int i = 0; i < mx; i++)
    {
        if (x == lena)
        {
            x = 0;
        }
        if (y == lenb)
        {
            y = 0;
        }

        if (a[x] > b[y])
        {
            printf(">\n");
            return;
        }
        else if (b[y] > a[x])
        {
            printf("<\n");
            return;
        }
        x++, y++;
    }
    printf("=\n");
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (cin >> a >> b)
    {
        Solution();
    }
    return 0;
}