#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, MAX = 0, ans = 0;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (MAX < x)
        {
            MAX = x;
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}