#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 20;
const int MAXS = (1 << MAXN) + 5;
const long long INF = 0x3f3f3f3f3f3f3f3f;

int n, x;
int a[MAXN + 5];
long long f[MAXN + 5][MAXS];

inline long long calc(long long x, int j)
{
    return x + (a[j] / x) * (a[j] + a[j] % x);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> x;

    fill_n(&f[0][0], MAXS * (n + 1), INF);
    f[0][0] = x;

    for (int i = 1; i <= n; i++)
    {
        for (int S = (1 << i) - 1; S >= 0; S--)
        {
            for (int j = 1; j <= i; j++)
            {
                if (S & (1 << (j - 1)))
                {
                    int S1 = S ^ (1 << (j - 1));
                    f[i][S] = min(f[i][S], calc(f[i - 1][S1], j));
                }
            }
        }
    }

    cout << f[n][(1 << n) - 1] << '\n';

    return 0;
}
