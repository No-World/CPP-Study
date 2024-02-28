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

struct user
{
    double ye;
    string name, xh;
} a[N];

void Solution(int __T)
{
    // 注意数组大小
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i].xh >> a[i].name >> a[i].ye;
        sum += a[i].ye;
    }
    sum /= 10;
    for (int i = 0; i < 10; i++)
    {
        if (a[i].ye > sum)
        {
            cout << a[i].xh << ' ' << a[i].name << ' ';
            printf("%.2f\n", a[i].ye);
        }
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}