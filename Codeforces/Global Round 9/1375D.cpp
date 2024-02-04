// Problem: D. Replace by MEX
// Contest: Codeforces - Codeforces Global Round 9
// URL: https://codeforces.com/group/RAx5fiilkP/contest/1375/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
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

int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    vector<int> cnt(n + 10);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    vector<int> op, unfit;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i)
            {
                unfit.push_back(i);
            }
        }
        if (unfit.size() == 0)
        {
            break;
        }
        int mex = 0;
        while (cnt[mex] != 0)
        {
            mex++;
        }
        if (mex == n)
        {
            int i = unfit.back();
            op.push_back(i);
            cnt[a[i]]--;
            cnt[mex]++;
            a[i] = mex;
        }
        else
        {
            op.push_back(mex);
            cnt[a[mex]]--;
            cnt[mex]++;
            a[mex] = mex;
        }
        unfit.clear();
    }
    printf("%d\n", op.size());
    for (int i = 0; i < op.size(); i++)
    {
        printf("%d ", op[i] + 1);
    }
    printf("\n");
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