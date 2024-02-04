// Problem: E. Gardener and Tree
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/E
// Memory Limit: 256 MB
// Time Limit: 4000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
#include <queue>
// #include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> adj[n];
    vector<int> degree(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        --u, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    int cnt = 0;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (degree[i] == 1)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int x = q.size();
        for (int i = 0; i < x; i++)
        {
            int f = q.front();
            cnt++;
            q.pop();
            for (auto &e : adj[f])
            {
                degree[e]--;
                if (degree[e] == 1)
                {
                    q.push(e);
                }
            }
        }
        k--;
        if (k == 0)
        {
            printf("%d\n", n - cnt);
            return;
        }
    }
    printf("0\n");
    return;
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}