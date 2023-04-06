#include <iostream>
using namespace std;
const int N = 1010, MOD = 65537;
int n, f[N];
int dfs(int x) {
    if (x <= 2) return 1;
    if (f[x]) return f[x];
    return f[x] = (dfs(x - 1) + dfs(x - 2)) % MOD;
}
int main()
{
    dfs(N - 10);
    while (scanf("%d", &n)) printf("%d\n", f[n]);
    return 0;
}