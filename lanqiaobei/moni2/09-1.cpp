#include <cstdio>
#include <iostream>
using namespace std;
char x[110][110];
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", x[i] + 1);
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < m; j++)
        {
            int a = 1;
            while (x[i + a][j + a] == x[i + a][j - a] && x[i - a][j + a] == x[i - a][j - a] && x[i + a][j + a] == x[i - a][j - a] && x[i + a][j + a] == x[i][j])
            {
                ans++;
                a++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}