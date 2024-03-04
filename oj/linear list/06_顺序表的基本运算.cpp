// Problem: 06:顺序表的基本运算
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202402/06/
// Memory Limit: 4 MB
// Time Limit: 1000 ms

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

vector<char> vec;

void print_all()
{
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%c ", vec[i]);
    }
    printf("\n");
}

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char c;
        getchar();
        scanf("%c", &c);
        vec.push_back(c);
    }
    print_all();
    printf("%d\n", vec.size());
    printf("%s\n", vec.empty() ? "yes" : "no");
    printf("%c\n", vec[2]);
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 'a')
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    vec.insert(3 + vec.begin(), 'f');
    print_all();
    vec.erase(vec.begin() + 2, vec.begin() + 3);
    print_all();
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