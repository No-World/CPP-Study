#include <iostream>
using namespace std;

int a[100005];
int ans;

int main()
{
    int n, m, k, l, r, x;
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r >> x;
        a[l] += x;
        a[r + 1] -= x;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        if (a[i] > k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}