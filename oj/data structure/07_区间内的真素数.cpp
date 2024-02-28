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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

vector<int> pri;
bool not_prime[N] = {1, 1};

void pre(int n)
{
    for (int i = 2; i <= n; ++i)
    {
        if (!not_prime[i])
        {
            pri.push_back(i);
        }
        for (int pri_j : pri)
        {
            if (i * pri_j > n)
            {
                break;
            }
            not_prime[i * pri_j] = true;
            if (i % pri_j == 0)
            {
                // i % pri_j == 0
                // 换言之，i 之前被 pri_j 筛过了
                // 由于 pri 里面质数是从小到大的，所以 i 乘上其他的质数的结果一定会被pri_j 的倍数筛掉，就不需要在这里先筛一次，所以这里直接 break 掉就好了
                break;
            }
        }
    }
}

int down__(int n)
{
    int m = 0;
    while (n)
    {
        m *= 10;
        m += n % 10;
        n /= 10;
    }
    return m;
}

void Solution(int __T)
{
    // 注意数组大小
    pre(1e5);
    int m, n;
    scanf("%d%d", &m, &n);
    bool flag = 0;
    for (int i = m; i <= n; i++)
    {
        if (!not_prime[i] && !not_prime[down__(i)])
        {
            if (flag)
            {
                printf(",");
            }
            printf("%d", i);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("No\n");
    }

    printf("\n");
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