#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int L[1000010], sum[1000010], l, m, n;

int main()
{
    scanf("%d%d%d", &l, &m, &n);
    while (m--)
    {
        int s, e;
        scanf("%d%d", &s, &e);
        L[++s]++, L[++e + 1]--;
    }
    for (int i = 1; i <= l + 1; i++)
    {
        L[i] += L[i - 1];
        sum[i] += sum[i - 1] + (L[i] == 0);
    }
    while (n--)
    {
        int s, e;
        scanf("%d%d", &s, &e);
        cout << sum[++e] - sum[++s - 1] << '\n';
    }
    return 0;
}