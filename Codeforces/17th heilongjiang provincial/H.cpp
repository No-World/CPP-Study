// Problem: H. Kanbun
// Contest: Codeforces - The 17th Heilongjiang Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103688/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
#include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e5 + 10;
char a[N];
int n, sum = 0, b[N];

inline void dfs(int l, int r)
{
    if (l > r)
    {
        return;
    }
    if (a[l] != '(')
    {
        printf("%d ", l);
        dfs(l + 1, r);
    }
    else
    {
        dfs(l + 1, b[l] - 1);
        printf("%d ", b[l]);
        printf("%d ", l);
        dfs(b[l] + 1, r);
    }
}

inline void Solution()
{
    scanf("%d", &n);
    scanf("%s", a + 1);
    stack<int> S;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == '(')
            S.push(i);
        else if (a[i] == '-')
        {
            b[i] = i;
        }
        else
        {
            b[S.top()] = i;
            b[i] = i;
            S.pop();
        }
    }
    dfs(1, n);
}

int main(int argc, char const *argv[])
{
    int t = 1;
    // scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}