// Problem: 09:后缀表达式计算
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/09/
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

int computer(int a, char op, int b) // op代表运算符 a，b为操作数

{

    if (op == '+')

        return a + b;

    else if (op == '-')

        return a - b;

    else if (op == '*')

        return a * b;

    else

        return a / b;
}

// int main()
// {

//     stack<char> s1;

//     string s;

//     cin >> s;

//     for (int i = 0; i < s.length(); i++)

//     {

//         if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')

//         { // 遇到运算符就要对栈顶两个元素进行计算

//             int a = s1.top() - '0';
//             s1.pop();

//             int b = s1.top() - '0';
//             s1.pop(); //-’0’是为了将字符转换成数字

//             int c = computer(b, s[i], a);

//             s1.push(c + '0');
//         }

//         else

//         {

//             s1.push(s[i]);
//         }
//     }

//     cout << s1.top() - '0';

//     return 0;
// }

void Solution(int __T)
{
    // 注意数组大小
    stack<int> stk;
    char a;
    while (cin >> a)
    {
        if (a < '0' || a > '9')
        {
            int y = stk.top();
            stk.pop();
            int x = stk.top();
            stk.pop();
            switch (a)
            {
            case '+':
                x += y;
                break;
            case '-':
                x -= y;
                break;
            case '*':
                x *= y;
                break;
            case '/':
                x /= y;
                break;
            default:
                break;
            }
            stk.push(x);
            // cout << stk.top() << '\n';
        }
        else
        {
            stk.push(a - '0');
        }
    }
    cout << stk.top() << '\n';
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