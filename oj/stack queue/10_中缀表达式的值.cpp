// Problem: 10:中缀表达式的值
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/10/
// Memory Limit: 1 MB
// Time Limit: 200 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
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

vector<string> rev;

bool prior(char a, char b)
{
    if ((a == '+' || a == '-') && (b == '*' || b == '/'))
        return false;
    else
        return true;
}

void pushOP(char a)
{
    char tmp[2];
    tmp[0] = a, tmp[1] = '\0';
    rev.push_back(string(tmp));
}

void reverseNotation(char *str)
{
    stack<char> op;
    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case '(':
            op.push('(');
            break;
        case ')':
            while (!op.empty())
            {
                if (op.top() == '(')
                {
                    op.pop();
                    break;
                }
                pushOP(op.top());
                op.pop();
            }
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            while (!op.empty() && op.top() != '(' && prior(op.top(), str[i]))
            {
                pushOP(op.top());
                op.pop();
            }
            op.push(str[i]);
            break;
        default:
            char tmp[650];
            int ptr = 0;
            while (str[i] <= '9' && str[i] >= '0')
            {
                tmp[ptr++] = str[i++];
            }
            i--;
            tmp[ptr] = '\0';
            rev.push_back(string(tmp));
        }
    }
    while (!op.empty())
    {
        pushOP(op.top());
        op.pop();
    }
}

void Solution(int __T)
{
    // 注意数组大小
    stack<int> num;
    int size = rev.size();
    for (int i = 0; i < size; i++)
    {
        if (rev[i][0] <= '9' && rev[i][0] >= '0')
        {
            num.push(atoi(rev[i].c_str()));
        }
        else
        {
            int n2 = num.top();
            num.pop();
            int n1 = num.top();
            num.pop();
            switch (rev[i][0])
            {
            case '+':
                num.push(n1 + n2);
                break;
            case '-':
                num.push(n1 - n2);
                break;
            case '*':
                num.push(n1 * n2);
                break;
            case '/':
                num.push(n1 / n2);
                break;
            }
        }
    }
    cout << num.top() << '\n';
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    // ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        rev.clear();
        char str[650] = {};
        scanf("%s", str);
        reverseNotation(str);
        Solution(i);
    }
    return 0;
}