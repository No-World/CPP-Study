#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110, M = 110;

int n, m;
int g[N][M];

void add(int x1, int y1, int x2, int y2, int c)
{
    g[x1][y1] += c;
    g[x2 + 1][y1] -= c;
    g[x1][y2 + 1] -= c;
    g[x2 + 1][y2 + 1] += c;
}

int main()
{
    cin >> n >> m;

    int T;
    cin >> T;

    memset(g, 0, sizeof g);
    while (T--)
    {
        int l, r, d, u;
        cin >> l >> d >> r >> u; // mark
        add(l, d, r, u, 1);
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];

    //  for(int i = 1; i <= n; i ++) {
    //      for(int j = 1; j <= m; j ++)
    //          cout << g[i][j] << " ";
    //      cout << "\n";
    //  }

    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (!g[i][j])
                res++;

    cout << res << "\n";
    return 0;
}