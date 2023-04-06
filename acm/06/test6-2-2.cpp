#include <iostream>
using namespace std;
const int MAX = 1e3 + 5;
int a[MAX][MAX], sum[MAX][MAX];
int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            sum[i][j] = a[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    while (p--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 > x2)
        {
            int t = x2;
            x2 = x1;
            x1 = t;
        }
        if (y1 > y2)
        {
            int t = y2;
            y2 = y1;
            y1 = t;
        }
        cout << sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1] << endl;
    }
    return 0;
}