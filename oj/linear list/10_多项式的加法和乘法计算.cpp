// Problem: 10:多项式的加法和乘法计算
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202402/10/
// Memory Limit: 64 MB
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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

struct node
{
    int zhi;
    int xi;
    node *next;
};

void input(node *p)
{
    p->next = NULL;
    node *u = new node;
    while (cin >> u->xi >> u->zhi)
    {
        if (u->xi == 0)
            break;
        p->next = u;
        u->next = NULL;
        p = u;
        u = new node;
    }
}
node *sum(node *p, node *u)
{
    node *a, *b, *l;
    node *h = new node;
    h->next = NULL;
    l = h;
    a = p->next;
    b = u->next;
    while (a != NULL && b != NULL)
    {
        if (a->zhi > b->zhi)
        {
            node *m = new node;
            m->zhi = a->zhi;
            m->xi = a->xi;
            m->next = NULL;
            l->next = m;
            l = m;
            a = a->next;
        }
        else if (a->zhi < b->zhi)
        {
            node *m = new node;
            m->zhi = b->zhi;
            m->xi = b->xi;
            m->next = NULL;
            l->next = m;
            l = m;
            b = b->next;
        }
        else
        {
            if (a->xi + b->xi != 0)
            {
                node *m = new node;
                m->xi = a->xi + b->xi;
                m->zhi = a->zhi;
                m->next = NULL;
                l->next = m;
                l = m;
                b = b->next;
                a = a->next;
            }
            else
            {
                b = b->next;
                a = a->next;
            }
        }
    }
    if (a == NULL && b != NULL)
    {
        while (b != NULL)
        {
            node *m = new node;
            m->xi = b->xi;
            m->zhi = b->zhi;
            m->next = NULL;
            l->next = m;
            l = m;
            b = b->next;
        }
    }
    else if (a != NULL && b == NULL)
    {
        while (a != NULL)
        {
            node *m = new node;
            m->xi = a->xi;
            m->zhi = a->zhi;
            m->next = NULL;
            l->next = m;
            l = m;
            a = a->next;
        }
    }
    return h;
}
node *mult(node *p, node *u)
{
    int i = 0;
    node *a = p->next, *b = u->next, *d;
    node *t = new node;
    t->next = NULL;
    d = t;
    node *y = new node;
    node *r = new node;
    r->zhi = 0;
    r->xi = 0;
    r->next = NULL;
    y->next = r;
    while (a != NULL)
    {
        b = u->next;
        d = t;
        while (b != NULL)
        {
            node *c = new node;
            c->zhi = a->zhi + b->zhi;
            c->xi = a->xi * b->xi;
            c->next = NULL;
            d->next = c;
            d = c;
            b = b->next;
        }
        // print(t);
        y = sum(y, t);
        // print(sum(g,t));
        a = a->next;
    }
    return y;
}
void print(node *p)
{
    node *u;
    for (u = p->next; u != NULL; u = u->next)
    {
        if (u->xi != 1 && u->xi != -1 && u->xi != 0)
            cout << u->xi;
        else if (u->xi == -1)
            cout << "-";
        else if (u->zhi == 0 && u->xi != 0)
            cout << u->xi;
        if (u->zhi > 1)
            cout << "x^" << u->zhi;
        else if (u->zhi == 1)
            cout << "x";
        if (u->next != NULL && u->next->xi > 0)
            cout << "+";
    }
    cout << endl;
}

void Solution(int __T)
{
    // 注意数组大小
    struct node *a = new node;
    input(a);
    struct node *b = new node;
    input(b);
    print(sum(a, b));
    // mult(a,b);
    print(mult(a, b));
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