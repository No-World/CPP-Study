// Problem: 上分
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/53485/B
// Memory Limit: 524288 MB
// Time Limit: 4000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <array>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
// #include <queue>
// #include <map>
// #include <set>
// #include <cmath>
using namespace std;
// typedef long long ll;  // 定义一个类型别名，long long 取名为 ll

int main()
{
    // 设置 cin 和 cout 不会被同步，加快读写速度
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    // 输入测试用例数量
    int T;
    cin >> T;
    while (T--)
    {
        // 输入数据，包括整数 n, m 和 n 组三元组 (a, b, c)
        int n, m;
        cin >> n >> m;
        vector<array<int, 3>> p(n); // 用数组保存三元组
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            p[i] = {a, b, c};
        }
        vector<int> id(n); // 用一个数组保存 n 个元素的编号
        for (int i = 0; i < n; i++)
        {
            id[i] = i;
        }
        int ans = 0;
        do
        {
            int sum = 0, t = 0;
            for (int i = 0; i < n; i++)
            {
                auto [a, b, c] = p[id[i]]; // 使用 C++17 的结构化绑定
                t += b;                    // 更新时间
                if (t <= m)                // 如果时间没有超过限制
                {
                    int delta = a / 250;                            // 计算除数
                    sum += max(a - t * delta - 50 * c, 3 * a / 10); // 更新收益
                }
            }
            ans = max(ans, sum);                          // 更新答案
        } while (next_permutation(id.begin(), id.end())); // 对 n 个元素的编号进行全排列
        cout << ans << '\n';                              // 输出答案
    }
    return 0; // 返回 0 表示程序运行成功
}