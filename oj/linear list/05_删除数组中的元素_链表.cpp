// Problem: 05:删除数组中的元素（链表）
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202302/05/
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

struct Node
{
    int data;
    Node *next;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void deleteNode(Node **head_ref, int key)
{
    Node *temp = *head_ref;
    Node *prev = NULL;

    while (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        temp = *head_ref;
    }

    if (temp == NULL)
        return;

    while (temp != NULL)
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
            return;

        prev->next = temp->next;
        delete temp;

        temp = prev->next;
    }
}

void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

void Solution(int __T)
{
    int n, k;
    scanf("%d", &n);
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);
        if (head == NULL)
        {
            head = newNode(data);
            tail = head;
        }
        else
        {
            tail->next = newNode(data);
            tail = tail->next;
        }
    }
    scanf("%d", &k);
    deleteNode(&head, k);
    printList(head);
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
