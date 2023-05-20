// Problem: D - AABCC
// Contest: AtCoder - ユニークビジョンプログラミングコンテスト2023 春 (AtCoder Beginner Contest 300)
// URL: https://atcoder.jp/contests/abc300/tasks/abc300_d
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <algorithm>
// #include <cmath>
// #include <cstdlib>
// #include <cstring>
#include <iostream>
// #include <map>
// #include <queue>
// #include <set>
// #include <stack>
#include <cstdio>
// #include <unordered_map>
// #include <vector>
using namespace std;
typedef long long ll;
ll n, k, m;
const int N = 1e6 + 10;
bool isprime[N];
ll Num[N];
int r = 1;
void isPrime()
{
    for (int i = 0; i <= N; i++)
    {
        isprime[i] = true;
    }
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= N; i++)
    { // 从2开始往后筛
        if (isprime[i])
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (isprime[i] == 1)
        {
            Num[r++] = i;
        }
    }
    r--;
}
void Solution()
{
    isPrime();
    cin >> n;
    int ans = 0;
    for (int a = 1; a <= r; a++)
    {

        for (int b = a + 1; b <= r; b++)
        {
            for (int c = b + 1; c <= r; c++)
            {
                ll temp = Num[a] * Num[a] * Num[b] * Num[c] * Num[c];
                if (temp <= n)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            if (Num[a] * Num[a] * Num[b] * Num[b] * Num[b] > n)
            {
                break;
            }
        }
        if (Num[a] * Num[a] * Num[a] * Num[a] * Num[a] > n)
        {
            break;
        }
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        Solution();
    }
    return 0;
}