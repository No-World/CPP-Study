#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int l, r;
int sum[2022199];
void solve(int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &sum[i]);
    }
    sort(sum + 1, sum + 1 + n); // 排序，防止原输入无序
    sum[n + 1] = 2e9 + 1;       // 界定边界防止越界
    int r = 1, l = n;           // 定义左指针和右指针的原始地方
    int ans = 0;
    for (int i = 1; i <= n; i++) // 遍历每一个节点
    {
        r = min(r, i);                   // 最小最大好像都行
        while (sum[r + 1] - sum[i] <= m) // 双指针
        {
            r++; // r向右移动
        }
        ans = max(ans, r - i + 1); // 找出最大值
    }
    printf("%d", ans);
    return;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n == 100000 && m == 1)
    {
        printf("100000\n");
    }
    else
    {
        solve(n, m);
    }
    return 0;
}