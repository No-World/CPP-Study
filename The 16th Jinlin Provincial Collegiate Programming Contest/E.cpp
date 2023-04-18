// 问题E.JWan的项链
// 输入文件 : 标准输入
// 输出文件 : 标准输出
// JWan有一条彩色的珍珠项链。项链上的每个珍珠都有一种颜色。我们使用不同的数字来表示不同的颜色，项链可以看作是一个循环数组。
// JWan非常喜欢彩色的珍珠，对于不同的颜色，她有不同程度的喜欢。如果一种颜色出现在项链上长度为k的所有区间中，她就会对这种颜色有一定程度为k的喜欢。
// 注意，JWan可以对一种颜色有多种程度的喜欢。
// 现在，对于k = 1; 2;...; n，JWan很好奇，她喜欢的所有珍珠中，最大的颜色编号是多少。
// 输入
// 第一行包含一个整数n(1 <= n <= 106)，表示JWan的项链的长度。
// 第二行包含n个整数c1; c2;...; cn(1 <= ci <= n)，其中ci表示第i个珍珠的颜色。注意，项链是一个环（即第1个珍珠和第n个珍珠是相邻的）。
// 输出
// 输出一行包含n个整数，其中第i个整数表示JWan喜欢的所有珍珠中，最大的颜色编号。特别地，如果没有颜色她喜欢的程度为i，输出0。
// 样例1
// 标准输入
// 5
// 1 3 2 1 2
// 标准输出
// 0 0 2 2 3
// 样例2
// 标准输入
// 10
// 2 4 1 3 2 1 3 1 2 1
// 标准输出
// 0 0 1 2 2 2 3 3 3 4
// 以下为上面题目的代码
// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;

inline void Solution()
{
    int n;
    scanf("%d", &n);

    int m = n << 1;

    vector<int> c(m + 1);
    for (int i = 1; i <= n; i++) // 对于珍珠项链是一个环来说，直接将其当作二倍处理更方便
    {
        scanf("%d", &c[i]); // 因为作为环状，从任何一个珍珠开始都可以
        c[i + n] = c[i];
    }

    vector<int> d(n + 1);       // 记录两个相同颜色的珍珠x最大的间隔
    vector<int> last(m + 1, m); // 记录上次出现的位置
    for (int i = 1; i <= m; i++)
    {
        int k = c[i];
        d[k] = max(d[k], i - last[k]);
        last[k] = i;
    }

    vector<int> p(n + 1); // 好感度为i时的最大数字
    for (int i = 1; i <= n; i++)
    {
        int dist = d[i];           // 获取数字i的最大间距
        p[dist] = max(p[dist], i); // 取出最大值
    }
    p[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        p[i] = max(p[i], p[i - 1]);
        printf("%d ", p[i]);
    }
    printf("\n");
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