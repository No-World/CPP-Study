#include <iostream>
using namespace std;

const int N = 4e5;          // 数组最大长度
const int INF = 0x3f3f3f3f; // 无穷大

struct Tree
{
    int mx;           // 区间最大值
    int ro;           // 区间或
} tree[(N << 2) + 1]; // 线段树

// push_up: 上推当前节点的值
void push_up(int id)
{
    tree[id].ro = tree[id << 1].ro | tree[(id << 1) + 1].ro;
    tree[id].mx = max(tree[id << 1].mx, tree[(id << 1) + 1].mx); // 更新当前节点为左右子树中最大的值
}

// build: 建立线段树
void build(int id, int l, int r)
{
    if (l == r)
    {
        cin >> tree[id].mx; // 输入当前节点的值
        tree[id].ro = tree[id].mx;
        return;
    }
    int mid = (l + r) / 2;
    build(id << 1, l, mid);           // 递归建立左子树
    build((id << 1) + 1, mid + 1, r); // 递归建立右子树
    push_up(id);                      // 更新当前节点的值
}

// query: 区间查询最大值
int query(int id, int l, int r, int x, int y)
{
    if (r < x || l > y) // 当前区间和查询区间无交集
    {
        return -INF; // 返回负无穷
    }
    if (l >= x && r <= y) // 当前区间被完全包含在查询区间内
    {
        return tree[id].mx; // 返回当前区间的最大值
    }
    int mid = (l + r) / 2;
    int a = query(id << 1, l, mid, x, y);           // 递归查询左子树
    int b = query((id << 1) + 1, mid + 1, r, x, y); // 递归查询右子树
    return max(a, b);                               // 返回左右子树中的最大值
}

// modify1: 单点修改
void modify1(int id, int l, int r, int x, int v)
{
    if (l > x || r < x) // 当前区间不包含修改点
    {
        return;
    }
    if (l == r && l == x) // 当前区间为叶节点，且为修改点
    {
        tree[id].mx = v; // 修改当前节点的值
        tree[id].ro = v; // 更新当前区间的运算结果
        return;
    }
    int mid = (l + r) / 2;
    modify1(id << 1, l, mid, x, v);           // 递归修改左子树
    modify1((id << 1) + 1, mid + 1, r, x, v); // 递归修改右子树
    push_up(id);                              // 更新当前节点的值
}

// modify2: 区间修改，给定一个区间 [x, y] 和一个值 v，将线段树上该区间的所有节点的值与 v 按位与
void modify2(int id, int l, int r, int x, int y, int v)
{
    if (r < x || l > y) // 当前区间与修改区间无交集
    {
        return;
    }
    if ((tree[id].ro & v) == tree[id].ro) // 当前区间与 v 进行位与后没有改变
    {
        return; // 当前区间不需要进行修改
    }

    if (l == r) // 如果已经到达叶子节点
    {
        tree[id].mx &= v; // 将叶子节点的值修改为 v
        tree[id].ro &= v; // 更新叶子节点的运算结果
        return;
    }
    int mid = (l + r) / 2;
    // 如果左子区间与要修改的区间有交集，则继续向下递归修改左子区间
    modify2(id << 1, l, mid, x, y, v);

    // 如果右子区间与要修改的区间有交集，则继续向下递归修改右子区间
    modify2((id << 1) + 1, mid + 1, r, x, y, v);

    // 因为我们采用的是区间最大值的线段树，所以在修改完子区间后需要将当前区间的最大值更新
    push_up(id);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;  // 输入区间长度和操作数
    build(1, 1, n); // 建树，区间长度为 n

    while (m--)
    {
        string op;
        cin >> op;       // 输入操作类型
        if (op == "AND") // 如果是区间修改 AND 操作
        {
            int l, r, v;
            cin >> l >> r >> v;        // 输入区间左端点 l，右端点 r，以及要修改的值 v
            modify2(1, 1, n, l, r, v); // 将区间 [l, r] 的元素全部修改为 v
        }
        else if (op == "UPD") // 如果是单点修改 UPD 操作
        {
            int x, v;
            cin >> x >> v;          // 输入要修改的位置 x，以及要修改成的值 v
            modify1(1, 1, n, x, v); // 将位置 x 的元素修改为 v
        }
        else if (op == "QUE") // 如果是查询 QUE 操作
        {
            int l, r;
            cin >> l >> r;                        // 输入查询区间的左右端点
            cout << query(1, 1, n, l, r) << '\n'; // 输出区间 [l, r] 的和
        }
    }
    return 0;
}