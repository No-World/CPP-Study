// Problem: 04:假币问题
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-串和数组
// URL: http://qdacm.openjudge.cn/ds202404/04/
// Memory Limit: 64 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
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

char Left[3][7];
char Right[3][7];
char Result[3][7];

bool iscounterfeitcoin(char icoin, bool islight)
{
    for (int i = 0; i < 3; i++)
    {
        char *pLeft, *pRight;
        if (islight)
        {
            pLeft = Left[i];
            pRight = Right[i];
        }
        else
        {
            pLeft = Right[i];
            pRight = Left[i];
        }
        switch (Result[i][0])
        {
        case 'u':
            if (strchr(pRight, icoin) == NULL)
                return false;
            break;
        case 'e':
            if (strchr(pLeft, icoin) || strchr(pRight, icoin))
                return false;
            break;
        case 'd':
            if (strchr(pLeft, icoin) == NULL)
                return false;
            break;
        }
    }
    return true;
}

void Solution(int __T)
{
    // 注意数组大小
    for (int i = 0; i < 3; i++)
        cin >> Left[i] >> Right[i] >> Result[i];
    for (char icoin = 'A'; icoin <= 'L'; icoin++)
        if (iscounterfeitcoin(icoin, true))
        {
            cout << icoin << " is the counterfeit coin and it is light." << endl;
            break;
        }
        else if (iscounterfeitcoin(icoin, false))
        {
            cout << icoin << " is the counterfeit coin and it is heavy." << endl;
            break;
        }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}