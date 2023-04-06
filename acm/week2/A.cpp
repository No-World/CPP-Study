#include <iostream>
#include <algorithm>
using namespace std;
int a[100010], b[100010], m[100010];
int main()
{
    int n, ans = 100010;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        if (i % 2 == 0)
            b[m[i]]++;
        else
            a[m[i]]++;
    }
    int nn = unique(m, m + n) - m;
    for (int i = 0; i <= nn; i++)
        for (int j = 0; j <= nn; j++)
        {
            if (i == j)
                j++;
            printf("%d %d %d\n", a[m[i]], b[m[j]], ans);
            ans = min(n - a[m[i]] - b[m[j]], ans);
            printf("%d %d %d\n", a[m[i]], b[m[j]], ans);
        }

    cout << ans;
    return 0;
}