#include <cstdio>
#include <map>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        mp[x]++;
    }

    long long ans = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        int x = it->second;
        ans += 1L * x * x;
        // printf("%d %d %d\n", it->first, it->second, ans);
    }
    printf("%lld", ans);
    return 0;
} // n*(n-1)种选择方式