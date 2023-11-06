/*以下为洛谷某解法
可以发现一共有三种拼接方法:两个等长的,一长一短,或者一短一长。
我们设num_{i,j}表示一共有i位且各位数之和为j的字符串的数量。
设b_{i,j}为一个字符串被分成两段且右边比左边长度大i,各位数和大j的字符串的数量。
(如{2,2,2,1}就在b_{0,1},b_{2,3},b_{4,7}中分别记1,{2,2,1}就在b_{1,3},b_{3,5}中分别记1,意思为总长缺i,总量缺j的字符串)
我们枚举放在左边的字符串,设当前字符串长度为i,各位数之和为j。
对三种情况分类讨论:
  1.两个字符串等长:答案为num_{i,j}。
  2.左边字符串短于右边字符串:答案为b_{i,j},因为这样就把右边比左边多的都弥补了。
  3.左边字符串长于右边字符串:我们可以枚举被割在右边的字符串子串长度,通过num数组统计答案即可。和第二种情况同理。*/
#include <bits/stdc++.h>
using namespace std;

const int N = 200005, M = 55;

int a[N];
int b[6][M], num[6][M];
int cc[6];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        int cnt = 0;
        int j = a[i];
        int sum = 0;
        while (j)
        {
            cc[++cnt] = j % 10;
            sum += cc[cnt];
            j /= 10;
        }
        // 第一种初始化
        num[cnt][sum]++;
        // 第二种初始化
        int sum2 = sum;
        for (int j = 1; j < cnt; j++)
        {
            sum2 += cc[j];
            if (cnt >= j * 2 || sum2 * 2 <= sum)
            {
                continue;
            }
            b[j * 2 - cnt][sum2 * 2 - sum]++;
        }
        // cout<<i<<": "<<sum<<'\n';
    }
    long long ans = 0;
    // 定义b_{i,j}为右边-左边,长度为i,大小为j的字符串数量
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        int j = a[i];
        int sum = 0;
        while (j)
        {
            cc[++cnt] = j % 10;
            sum += cc[cnt];
            j /= 10;
        }
        // 第一种
        ans += num[cnt][sum];
        // 第二种
        ans += b[cnt][sum];
        // 第三种
        int sum2 = 0;
        for (int j = 1; j * 2 <= cnt; j++)
        {
            sum2 += cc[j];
            if (sum2 * 2 > sum)
            {
                break;
            }
            ans += num[cnt - j * 2][sum - sum2 * 2];
            // cout<<cnt-j-j<<" "<<sum-sum2<<'\n';
        }
        //	cout<<i<<" ans:"<<ans<<" "<<b[cnt][sum]<<'\n';
    }
    printf("%lld", ans);
    return 0;
}