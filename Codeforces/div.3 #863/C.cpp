#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int b[n];

        for (int i = 1; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        int a[n + 1];
        a[1] = b[1];
        for (int i = 2; i <= n; i++)
        {
            a[i] = b[i - 1];
            if (i != n && b[i] < a[i])
            {
                a[i] = b[i];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}