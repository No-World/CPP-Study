// Problem: C. Find a Mine
// Contest: Codeforces Round 931 (Div. 2)
// URL: https://codeforces.com/contest/1934/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int check(int x, int y)
{
    cout << "\n";
    cout << "? " << x << " " << y << "\n";
    int c;
    cin >> c;
    return c;
}

void Solution(int __T)
{
    // 注意数组大小
    int n, m;
    cin >> n >> m;
    int k = check(1, 1);
    if (k == 0)
    {
        cout << "\n";
        cout << "! " << 1 << " " << 1 << "\n";
        return;
    }
    int w = k + 1;
    int j = 1;
    if (w > n)
    {
        int dif = w - n;
        w = n;
        j = 1 + dif;
    }
    int k1 = check(w, j);
    if (k1 == 0)
    {
        cout << "\n";
        cout << "! " << w << " " << j << "\n";
        return;
    }
    int a = 1, b = k + 1;
    if (b > m)
    {
        int dif = b - m;
        b = m;
        a = 1 + dif;
    }
    int k2 = check(a, b);
    if (k2 == 0)
    {
        cout << "\n";
        cout << "! " << a << " " << b << "\n";
        return;
    }
    int x1 = w - (k1) / 2, y1 = j + k1 / 2, x2 = a + k2 / 2, y2 = b - k2 / 2;
    if (k1 % 2 == 1)
    {
        cout << "\n";
        cout << "! " << x2 << " " << y2 << "\n";
        return;
    }
    if (k2 % 2 == 1)
    {
        cout << "\n";
        cout << "! " << x1 << " " << y1 << "\n";
        return;
    }
    int k3 = check(x1, y1);
    if (k3 == 0)
    {
        cout << "\n";
        cout << "! " << x1 << " " << y1 << "\n";
        return;
    }
    else
    {
        cout << "\n";
        cout << "! " << x2 << " " << y2 << "\n";
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}