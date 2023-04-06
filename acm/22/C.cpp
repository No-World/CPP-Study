#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
const int MAXN = ((((((((((1 << 1) + 1) << 1) << 1) + 1) << 1) << 1) << 1) + 1) << 1);
const int MAXM = ((((((((((((((((((((((1 << 1) + 1) << 1) << 1) << 1) << 1) << 1) + 1) << 1) + 1) << 1) << 1) + 1) << 1) << 1) + 1) << 1) + 1) << 1) << 1) + 1) << 1);
int V[MAXM], u[MAXM], N[MAXM];
struct X
{
    int H, v, g;
};
vector<X> h[(((((((1 << 1) + 1) << 1) + 1) << 1) + 1) << 1)];
int C, n;
int main()
{
    int j, a = 1;
    X s;
    cin >> C >> n;
    for (int A = 0; A < C; A++)
    {
        cin >> s.H >> s.v >> j >> s.g;
        a = max(a, j);
        h[j].push_back(s);
    }
    for (int R = 0; R <= a; R++)
    {
        memset(N, 0, sizeof(N));
        for (int A = 0; A < h[R].size(); A++)
        {
            for (int U = 0; U <= n; U++)
                u[U] = V[U];
            int L = 1;
            while (L)
            {
                int H = h[R][A].H * L;
                int g = h[R][A].g * L;
                for (int U = n; U >= H; U--)
                    u[U] = max(u[U], u[U - H] + g);
                h[R][A].v -= L;
                L *= (1 << 1);
                L = min(L, h[R][A].v);
            }
            for (int U = 0; U <= n; U++)
                N[U] = max(N[U], u[U]);
        }
        for (int U = 0; U <= n; U++)
            V[U] = max(V[U], N[U]);
    }
    cout << V[n] << endl;
    return 0;
}
