#include <iostream>
#include <cstring>
#include <algorithm>
#include <utility>
using namespace std;
struct aa
{
    int frist, second, ds;
    int ma, mi;
    int dz;
};
aa a[30];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].frist >> a[i].ma >> a[i].second >> a[i].mi;
        a[i].ds = a[i].frist + a[i].second;
        if (a[i].frist == a[i].second)
            a[i].dz = 1;
        else
            a[i].dz = 0;
        if (a[i].frist < a[i].second)
        {
            swap(a[i].frist, a[i].second);
            swap(a[i].ma, a[i].mi);
        }
    }
    int sl = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i].dz > a[sl].dz)
            sl = i;
        else if (a[i].dz == a[sl].dz)
        {
            if (a[i].dz == 1)
            {
                if (a[i].ds > a[sl].ds)
                    sl = i;
                else if (a[i].ds == a[sl].ds)
                    if (a[i].ma == 1 || a[i].mi == 1)
                        sl = i;
            }
            else
            {
                if (a[i].frist > a[sl].frist)
                    sl = i;
                else if (a[i].frist == a[sl].frist && a[i].second > a[sl].second)
                    sl = i;
                else if (a[i].frist == a[sl].frist && a[i].second == a[sl].second)
                {
                    if (a[i].ma < a[sl].ma)
                        sl = i;
                }
            }
        }
    }
    cout << sl;
    return 0;
}