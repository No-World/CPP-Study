#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[110];
int main()
{
    int n, MAX = 0, MIN = 100010, MAX_n = 0, MIN_n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > MAX)
        {
            MAX = a[i];
            MAX_n = i;
        }
        if (a[i] < MIN)
        {
            MIN = a[i];
            MIN_n = i;
        }
    }
    if (MIN_n > MAX_n)
    {
        swap(MIN_n, MAX_n);
    }
    printf("%d\n", min(MAX_n, min(MIN_n + n - MAX_n + 1, MAX_n + n - MIN_n + 1)));

    return 0;
}