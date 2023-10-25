#include <iostream>
using namespace std;
typedef long long ll;
ll chk(ll x)
{
    ll base = 1000, ans = 0;
    while (x >= base)
    {
        ans += x - (base - 1);
        base *= 1000;
    }
    return ans;
}
struct
{
    void start()
    {
        ll n;
        cin >> n;
        ll l = 1000, r = n + 1000, ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (chk(mid) >= n)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }

} Genshin;
int main()
{
    Genshin.start();
    return 0;
}