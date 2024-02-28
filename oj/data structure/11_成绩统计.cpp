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

struct student
{
    string xh;
    int cj[10], zf;
} a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].xh >> a[i].cj[0] >> a[i].cj[1] >> a[i].cj[2] >> a[i].cj[3] >> a[i].cj[4] >> a[i].cj[5];
        a[i].zf = a[i].cj[0] + a[i].cj[1] + a[i].cj[2] + a[i].cj[3] + a[i].cj[4] + a[i].cj[5];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].xh << ' ' << a[i].cj[0] << ' ' << a[i].cj[1] << ' ' << a[i].cj[2] << ' ' << a[i].cj[3] << ' ' << a[i].cj[4] << ' ' << a[i].cj[5] << ' ' << a[i].zf << '\n';
    }
    for (int i = 0; i < 6; i++)
    {
        double x = 0;
        for (int j = 0; j < n; j++)
        {
            x += a[j].cj[i];
        }
        x /= n;
        printf("%.1f ", x);
    }
    printf("\n");
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