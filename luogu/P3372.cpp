#include <cstdio>
#include <iostream>
using namespace std;
// typedef long long ll;
const int MAXN = 1e5 + 10, INF = 0x3f3f3f3f;

int n, m;
int a[MAXN];

struct tree
{
    int l, r;      // 当前节点表示的区间的左右端点
    int min;       // 当前节点表示的区间的最小值
} tree[MAXN << 2]; // 线段树的数组表示

// 更新当前节点的值
inline void PushUp(int p)
{
    // 计算当前节点的值，一般是通过左右子节点的值来计算
    tree[p].min = min(tree[p << 1].min, tree[p << 1 | 1].min);
}

// 建立线段树
inline void build(int l, int r, int p)
{
    tree[p] = {l, r}; // 当前节点表示区间的左右端点
    if (l == r)       // 到达叶子节点
    {
        tree[p].min = a[l]; // 用数组中的数据赋值
    }
    else
    {
        int mid = (l + r) >> 1;        // 计算中点
        build(l, mid, p << 1);         // 递归建立左子节点
        build(mid + 1, r, p << 1 | 1); // 递归建立右子节点
        PushUp(p);                     // 从叶子节点开始更新线段树
    }
}

// 查询区间[l, r]的最小值
inline int query(int l, int r, int p)
{
    if (tree[p].l >= l && tree[p].r <= r) // 如果查询区间包含当前节点区间
    {
        return tree[p].min;
    }
    else
    {
        int mid = (tree[p].l + tree[p].r) >> 1; // 计算当前节点区间的中点
        int ans = INF;
        if (l <= mid) // 如果查询区间与左子节点有交集
            ans = min(ans, query(l, r, p << 1));
        if (r > mid) // 如果查询区间与右子节点有交集
            ans = min(ans, query(l, r, p << 1 | 1));
        return ans;
    }
}

// 修改数组中第x个数的值为v
inline void modify(int x, int v, int p)
{
    if (tree[p].l == tree[p].r) // 如果当前节点是叶子节点，即到达了要修改的数所在的位置
    {
        tree[p].min = v; // 直接修改当前节点的值为v
    }
    else
    {
        int mid = tree[p].l + tree[p].r >> 1; // 计算当前节点区间的中点
        if (x <= mid)                         // 如果要修改的数在左子节点中
        {
            modify(x, v, p << 1); // 递归修改左子节点
        }
        else // 如果要修改的数在右子节点中
        {
            modify(x, v, p << 1 | 1); // 递归修改右子节点
        }
        PushUp(p); // 更新当前节点的最小值
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    build(1, n, 1); // 建立线段树
    while (m--)
    {
        int op, l, r;
        scanf("%d%d%d", &op, &l, &r);
        if (op == 2) // 修改操作
        {
            modify(l, r, 1); // 将a[l]修改为r
        }
        else // 查询操作
        {
            printf("%d ", query(l, r, 1)); // 输出[l,r]区间内的最小值
        }
    }
    return 0;
}