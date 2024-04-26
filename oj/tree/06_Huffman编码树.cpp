// Problem: 06:Huffman编码树
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/06/
// Memory Limit: 63 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
#include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void num_sort(int weight[], int group)
{
    int t;
    for (int i = 0; i < group; i++)
    {
        for (int j = 0; j < group - i - 1; j++)
        {
            if (weight[j] < weight[j + 1])
            {
                t = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = t;
            }
        }
    }
}

int num_count(int weight[], int group)
{
    if (group == 1)
        return 0;
    else
    {
        num_sort(weight, group);
        weight[group - 2] = weight[group - 1] + weight[group - 2];
        return weight[group - 2] + num_count(weight, group - 1);
    }
}

void Solution(int __T)
{
    // 注意数组大小
    int num, group;
    cin >> num;
    while (num--)
    {
        int i;
        cin >> group;
        int weight[group];
        for (i = 0; i < group; i++)
        {
            cin >> weight[i];
        }
        cout << num_count(weight, group) << endl;
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}