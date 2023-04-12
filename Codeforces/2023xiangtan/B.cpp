// Problem: B. 熙巨打票
// Contest: Codeforces - 2023 Xiangtan Unversity Freshman Conteset
// URL: https://codeforces.com/gym/104303/problem/B
// Memory Limit: 64 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <queue>
// #include <map>
// #include <vector>
using namespace std;
const int inf = 0x3f3f3f3f, N = 1010;

inline void Solution()
{
    long long a, b, n;
    scanf("%lld%lld%lld", &a, &b, &n);
    long long t = n * b;
    if (b >= a)
    {
        printf("%lld\n", t);
        return;
    }
    t += (n - 1) / 2 * (a - b);
    printf("%lld\n", t);
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}