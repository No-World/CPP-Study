// Problem: C - Almost Equal
// Contest: AtCoder - TOYOTA MOTOR CORPORATION Programming Contest 2023#2 (AtCoder Beginner Contest 302)
// URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N1 = 1e0 + 10;
// const ll INF = __LONG_LONG_MAX__;

int M, N;
int flga = 0;
// void Swap(string a, string b)/*交换函数，将a和b的值互换*/
// {
//     string c = a;
//     a = b;
//     b = c;
// }
void Perm(string *br, int k, int m) /*br代表要进行全排列的数组，k~m代表这个数组中要进行全排列数字的范围*/
{
    if (k == m)
    {
        int i, kk = 0;
        for (i = 0; i <= N - 2; i++)
        {
            int ans = 0;
            for (int j = 0; j <= M - 1; j++)
            {
                if (br[i][j] != br[i + 1][j])
                    ans++;
            }
            if (ans > 1)
            {
                kk = 1;
                // cout<<kk;
                break;
            }
        }
        if (kk == 0)
        {
            cout << "Yes";
            flga = 1;
            return;
        }
        // for (int i = 0; i <= m; ++i)
        // {
        //     printf("%d ", br[i]);
        // }
        // printf("\n");
    }
    else
    {
        for (int j = k; j <= m; ++j)
        {
            swap(br[j], br[k]);
            Perm(br, k + 1, m);
            if (flga == 1)
                return;
            swap(br[j], br[k]);
        }
    }
}

inline void Solution()
{
    string a[10];
    scanf("%d%d", &N, &M);
    for (int i = 0; i <= N - 1; i++)
    {
        cin >> a[i];
    }
    int n = N - 1;
    Perm(a, 0, n);
    if (flga == 0)
        cout << "No";
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}