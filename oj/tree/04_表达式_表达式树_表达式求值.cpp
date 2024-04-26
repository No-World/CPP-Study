// Problem: 04:表达式·表达式树·表达式求值
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/04/
// Memory Limit: 63 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
#include <stack>
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

int val[26], n, len, ans, maxDep;
char infix[55], postfix[55], out[50][300];

struct node
{
    int ch;
    node *l, *r;
    node()
    {
        l = r = NULL;
    }
} *root;

// 计算a^b
int pow(int a, int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
        res *= a;
    return res;
}

// 将中缀转化为后缀表达式
void infixToPost(char *s)
{
    len = strlen(s);
    int i = 0;
    stack<char> S;
    for (int j = 0; j < len; j++)
    {
        if (isalpha(s[j]))
        {
            postfix[i++] = s[j];
        }
        else if (s[j] == '(')
        {
            S.push(s[j]);
        }
        else if (s[j] == ')')
        {
            while (!S.empty() && S.top() != '(')
            {
                postfix[i++] = S.top();
                S.pop();
            }
            if (!S.empty())
            {
                S.pop();
            }
        }
        else
        {
            while (!S.empty() && S.top() != '(' && (s[j] == '+' || s[j] == '-' || S.top() == '*' || S.top() == '/'))
            {
                postfix[i++] = S.top();
                S.pop();
            }
            S.push(s[j]);
        }
    }
    while (!S.empty())
    {
        postfix[i++] = S.top();
        S.pop();
    }
    postfix[i] = 0;
    len = i; // 把len设置为postfix的长度
}

// 根据建的树求值
int cal(node *cur)
{
    if (isalpha(cur->ch))
        return val[cur->ch - 'a'];
    else
    {
        switch (cur->ch)
        {
        case '+':
            return cal(cur->l) + cal(cur->r);
        case '-':
            return cal(cur->l) - cal(cur->r);
        case '*':
            return cal(cur->l) * cal(cur->r);
        case '/':
            return cal(cur->l) / cal(cur->r);
        }
    }
}

// 找到树的高度
int findDep(node *cur)
{
    if (!cur)
    {
        return 0;
    }
    int l = findDep(cur->l);
    int r = findDep(cur->r);
    return l > r ? l + 1 : r + 1;
}

// 将要打印的内容输出到out中
void print(node *cur, int x, int y, int space)
{
    out[x][y] = cur->ch;
    if (cur->l)
    {
        out[x + 1][y - 1] = '/';
        print(cur->l, x + 2, y - space, space >> 1);
    }
    if (cur->r)
    {
        out[x + 1][y + 1] = '\\';
        print(cur->r, x + 2, y + space, space >> 1);
    }
}

// 打印树
void printTree()
{
    // 我们已经知道m层的树有2m-1层输出，所以直接利用这一点即可(out[]的输出范围为0~2m-2)
    for (int i = 0; i < 2 * maxDep - 1; i++)
    {
        int j = 299;
        while (out[i][j] == ' ')
        {
            j--;
        }
        out[i][j + 1] = 0;
        cout << out[i] << endl;
    }
}

// 建树
void build()
{
    stack<node *> S;
    for (int i = 0; i < len; i++)
    {
        node *t = new node;
        t->ch = postfix[i];
        if (!isalpha(t->ch))
        {
            t->r = S.top();
            S.pop();
            t->l = S.top();
            S.pop();
        }
        S.push(t);
    }
    root = S.top();
    S.pop();
}

void Solution(int __T)
{
    // 注意数组大小
    cin >> infix;
    cin >> n;
    while (n--)
    {
        char ch;
        int v;
        cin >> ch >> v;
        val[ch - 'a'] = v;
    }
    infixToPost(infix); // 中缀转后缀
    cout << postfix << endl;
    build();                // 根据后缀建树
    ans = cal(root);        // 计算值
    maxDep = findDep(root); // 得到最大深度
    memset(out, ' ', sizeof(out));
    // 注意到根结点一定是在第一行的2^(maxDep-1)-1的下标位置(别问为什么，因为你看输出出来就是这么诡异)，
    // 也就是位于中间的位置，再根据当前层数判断叶子结点放的位置(print函数中)
    int y = pow(2, maxDep - 1) - 1; // 根结点在y上的坐标
    print(root, 0, y, y + 1 >> 1);  // 形成树形图
    printTree();
    cout << ans;
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