// Problem: 08:队列基本操作
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/08/
// Memory Limit: 4 MB
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
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;typedef int ElemType;

typedef int ElemType;
typedef struct Lnode
{
    ElemType data;
    struct Lnode *next;
} Lnode;
typedef struct
{
    Lnode *front, *rear;
} LinkQueue;

void init(LinkQueue &q)
{
    q.front = q.rear = new Lnode;
    q.front->next = NULL;
}

void push(LinkQueue &q, ElemType e)
{
    Lnode *s = new Lnode;
    s->data = e;
    s->next = NULL;
    q.rear->next = s;
    q.rear = s;
}

void pop(LinkQueue &q)
{
    Lnode *p = q.front->next;
    q.front->next = p->next;
    if (q.rear == p)
        q.rear = q.front;
    delete (p);
}

ElemType front(LinkQueue q)
{
    return q.front->next->data;
}

int size(LinkQueue q)
{
    int cnt = 0;
    Lnode *p = q.front->next;
    while (p)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

void display(LinkQueue q)
{
    Lnode *p = q.front->next;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void Solution(int __T)
{
    // 注意数组大小
    LinkQueue q;
    int x;
    init(q);
    while (1)
    {
        cin >> x;
        if (x == -3)
            break;
        if (x == -1)
            pop(q);
        else if (x == -2)
            display(q);
        else if (x >= 10 && x <= 99)
            push(q, x);
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