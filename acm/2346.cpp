#include <iostream>
#include <cstring>
using namespace std;

const int N = 50, V = 400, M = 400, C = 500;
int dp[V + 10][M + 10];

int main()
{
    int v_max, m_max, n;
    cin >> v_max >> m_max >> n;

    for (int i = 1; i <= n; i++)
    {
        int v, m, c;
        cin >> v >> m >> c;
        for (int j = v_max; j >= v; j--)
            for (int k = m_max; k >= m; k--)
            {
                if (j >= v && k >= m)
                {
                    dp[j][k] = max(dp[j][k], dp[j - v][k - m] + c);
                }
            }
    }

    cout << dp[v_max][m_max] << endl;
    return 0;
}