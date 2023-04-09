#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAXM = 100005;

int n, ma, mb;
int a[MAXM], b[MAXM];
ll ans = 0, bac = 1;

int main()
{
    cin >> n;
    cin >> ma;
    for (int i = 1; i <= ma; i++)
    {
        cin >> a[i];
    }
    cin >> mb;
    for (int i = 1; i <= mb; i++)
    {
        cin >> b[i];
    }
    int i = ma, j = mb;
    while (i > 0)
    {
        ans += (a[i] - b[j]) * bac;
        ans %= MOD;
        ll p = max(a[i], b[j]) + 1;
        bac *= max(p, 2LL);
        bac %= MOD;
        i--;
        if (j)
            j--;
    }
    cout << ans << endl;
    return 0;
}
