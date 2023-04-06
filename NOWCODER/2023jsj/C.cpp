#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
int n, m, t, now, l, r, c, T, k;
bool book[550]; // 判断是否被借走了
int e[550][550];
bool col[2022199];
bool row[2022199];
bool dg[2022199];
bool udg[2022199];
void solve()
{
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (udg[y + x] || dg[y - x + n] || col[y] || row[x])
        {
            printf("NO\n");
        }
        else
        {
            udg[y + x] = dg[y - x + n] = col[y] = row[x] = 1;
            printf("YES\n");
        }
    }
}
int main()
{
    // cin >> T;
    // while (T--)
    //{
    solve();
    //}
    return 0;
}
