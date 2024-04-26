// Problem: 03:由中根序列和后根序列重建二叉树
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/03/
// Memory Limit: 63 MB
// Time Limit: 500 ms

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
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int postorder[N], inorder[N];

struct btn
{
    int data;
    btn *left;
    btn *right;
};

btn *build_tree(int io1, int io2, int po1, int po2)
{
    /*io1, io2 are the begining and ending points of inorder sequence respectively*/
    /*po1, po2 are the begining and ending points of postorder sequence respectively*/
    int i = 0, ion = io2 - io1 + 1;
    btn *root = new btn;
    root->data = postorder[po2];
    root->left = NULL;
    root->right = NULL;
    for (i = 0; i < ion; i++)
    {
        if (root->data == inorder[io1 + i])
        {
            break;
        }
    }
    if (i > 0)
    {
        root->left = build_tree(io1, io1 + i - 1, po1, po1 + i - 1);
    }
    if (io1 + i < io2)
    {
        root->right = build_tree(io1 + i + 1, io2, po1 + i, po2 - 1);
    }
    return root;
}

void preorder(btn *root, int vnum, int &count)
{
    if (root != NULL)
    {
        cout << root->data;
        if (count < vnum - 1)
        {
            cout << " ";
            count++;
            preorder(root->left, vnum, count);
            preorder(root->right, vnum, count);
        }
        else
        {
            cout << endl;
        }
    }
}

void deletetree(btn *root)
{
    if (root != NULL)
    {
        delete (root->left);
        delete (root->right);
        delete root;
        root = NULL;
    }
}

void Solution(int __T)
{
    // 注意数组大小
    int c = 0, i = 0, vnum = 0;
    while (cin >> inorder[i++])
    {
        if (cin.get() != ' ')
        {
            break;
        }
        /*Although cin will skip the blank space, the cursor stays at the blank after cin reads a number，thus cin.get() can fetch the
        blank space.*/
    }

    vnum = i;
    i = 0;
    while (cin >> postorder[i++])
    {
        if (cin.get() != ' ')
        {
            break;
        }
    }
    btn *root = build_tree(0, i - 1, 0, i - 1);
    preorder(root, vnum, c);
    deletetree(root);
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