// Problem: 03:有序表的归并
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202402/03/
// Memory Limit: 63 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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

struct node
{
    string id, name;
    int fs;
};

bool cmp(node x, node y)
{
    return x.fs > y.fs;
}

void Solution(int __T)
{
    // 注意数组大小
    vector<node> vec;
    node x;
    while (cin >> x.id >> x.name >> x.fs)
    {
        vec.push_back(x);
    }
    stable_sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].id << ' ' << vec[i].name << ' ' << vec[i].fs << '\n';
    }
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