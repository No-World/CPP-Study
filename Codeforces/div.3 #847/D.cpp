#include <map>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
int main()
{
    map<ll, int> mp;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            ll sum;
            scanf("%lld", &sum);
            mp[sum]++;
        }
        int MAX = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            MAX = max(MAX, it->second);
        }
        printf("%d\n", MAX);
        mp.clear();
    }

    return 0;
}