// Problem: 05:快速转置算法
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-串和数组
// URL: http://qdacm.openjudge.cn/ds202404/05/
// Memory Limit: 63 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
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
const int inf = 0x3f3f3f3f, N = 2e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

typedef struct
{ // 1个元素的三元组
    int row, col;
    int e;
} Triple;

typedef struct
{
    Triple data[N];       // 三元组表数组
    int rows, cols, nums; // 行数，列数，非零元素的个数
} TSMatrix;

int num[N], pos[N];

void Fast_TransposeTSMatrix(TSMatrix *T, TSMatrix *M)
{
    int col, t, p;
    pos[1] = 1; // 第一个位置
    if (T->nums)
    {
        for (col = 1; col <= T->cols; col++) // 各列元素个数初始化
            num[col] = 0;
        for (t = 1; t <= T->nums; t++) // 记录各列元素个数
            num[T->data[t].col]++;

        for (col = 2; col <= T->cols; col++) // 记录起始位置
            pos[col] = pos[col - 1] + num[col - 1];

        for (p = 1; p <= T->nums; p++)
        {
            col = T->data[p].col; // 行列交换
            M->data[pos[col]].row = T->data[p].col;
            M->data[pos[col]].col = T->data[p].row;
            M->data[pos[col]].e = T->data[p].e; // 元素交换
            pos[col]++;                         // 当该位置存放一个三元组之后，则起始位置需要+1
        }
    }
}

void Solution(int __T)
{
    // 注意数组大小
    TSMatrix T;
    TSMatrix M;

    // 行列个
    scanf("%d%d%d", &T.rows, &T.cols, &T.nums);
    for (int i = 1; i <= T.nums; i++)
    {
        scanf("%d%d%d", &T.data[i].row, &T.data[i].col, &T.data[i].e);
    }

    Fast_TransposeTSMatrix(&T, &M);

    printf("num:\n");
    for (int i = 1; i <= T.cols; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nbefore Transpose pos:\n1 ");
    for (int i = 1; i < T.cols; i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\nafter Transpose pos:\n");
    for (int i = 1; i <= T.cols; i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\n");

    for (int i = 1; i <= T.nums; i++)
    {
        printf("%d %d %d\n", M.data[i].row, M.data[i].col, M.data[i].e);
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d",  &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}