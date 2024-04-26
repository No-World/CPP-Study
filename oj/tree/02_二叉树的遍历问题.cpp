// Problem: 02:二叉树的遍历问题
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/02/
// Memory Limit: 64 MB
// Time Limit: 10000 ms

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
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

struct TreeNode
{
    char data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(char c) : data(c), leftChild(NULL), rightChild(NULL) {}
};

// 根据先序遍历和中序遍历构建二叉树
TreeNode *Build(string str1, string str2)
{
    if (str1.size() == 0)
    {
        return NULL;
    }
    // 取先序遍历的第一个字符作为根节点
    char c = str1[0];
    // 在中序遍历中找到根节点的位置
    int pos = str2.find(c);
    // 创建根节点
    TreeNode *root = new TreeNode(c);
    //// 递归构建左子树
    root->leftChild = Build(str1.substr(1, pos), str2.substr(0, pos));
    //// 递归构建右子树
    root->rightChild = Build(str1.substr(pos + 1), str2.substr(pos + 1));

    return root;
}

// 后序遍历输出
void postOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    // 先遍历左子树
    postOrder(root->leftChild);
    // 再遍历右子树
    postOrder(root->rightChild);
    // 输出当前根节点的值
    cout << root->data;

    return;
}

void Solution(int __T)
{
    // 注意数组大小
    string s1, s2;
    while (getline(cin, s1))
    {
        getline(cin, s2);
        TreeNode *root = Build(s1, s2);
        // cout << "该树的后序遍历序列为：";
        postOrder(root);
        cout << endl;
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