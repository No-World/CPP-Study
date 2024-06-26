// Problem: 11:顺序表区间元素删除
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202402/11/
// Memory Limit: 4 MB
// Time Limit: 5000 ms

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

vector<int> vec;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        vec.push_back(x);
    }
    int l, r;
    scanf("%d%d", &l, &r);
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] >= l && vec[i] <= r)
        {
            vec.erase(vec.begin() + i, vec.begin() + i + 1);
            i--;
        }
    }
    for (auto it : vec)
    {
        printf("%d ", it);
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
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}