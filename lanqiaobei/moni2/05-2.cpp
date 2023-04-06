#include <bits/stdc++.h>

#include <iostream>
using namespace std;
typedef long long LL;
bool isPrime[3000];
bool getPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int bagIntems[3000], ans = -1, sumDP[3000][3000];
tuple<int, int> DIRDP[3000][3000]; //不用了
bool dp[3000][3000];
int doDFS(int x, int y, int step)
{ // TLE
    if (y == 0)
        return step;
    if (x == 0)
        return step - 1; // dp[0][0]不纳入计算
    int res = -1;
    if (y - bagIntems[x - 1] >= 0 && dp[x - 1][y - bagIntems[x - 1]] == true)
    {
        res = doDFS(x - 1, y - bagIntems[x - 1], step + 1);
    }
    res = max(doDFS(x - 1, y, step), res);
    return res;
}
int main()
{
    int totalBagNum = 0;
    for (int i = 2; i <= 2022; i++)
    {
        if (getPrime(i))
        {
            bagIntems[totalBagNum++] = i;
        }
    }
    dp[0][0] = true;
    sumDP[0][0] = 0;
    for (int i = 1; i <= totalBagNum; i++)
    {
        for (int j = 0; j <= 2022; j++)
        {
            if (j < bagIntems[i - 1])
            {
                dp[i][j] = dp[i - 1][j];
                sumDP[i][j] = sumDP[i - 1][j];
            }
            else
            {
                if (dp[i - 1][j - bagIntems[i - 1]])
                {
                    dp[i][j] = true;
                }
                if (dp[i - 1][j])
                {
                    dp[i][j] = true;
                }
                sumDP[i][j] = max(sumDP[i - 1][j], sumDP[i - 1][j - bagIntems[i - 1]] + 1);
            }
            if (dp[i][j] == true && j == 2022)
            {
                ans = i;
            }
        }
    }
    cout << "我们最多在前：" << ans << "个素数内找到\n";
    cout << sumDP[totalBagNum][2022]; //可以测试一下5 2+3或5 最长为2
    // cout << doDFS(4, 17, 0); //TEST 2 3 5 7 = 17
    // cout << doDFS(ans, 1000, 0);
    return 0;
}