// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <string>
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

// 比较左右大小，右大于左为假
bool compare(string a, string b)
{
    int lena = a.length(), lenb = b.length();
    if (lenb > lena)
    {
        return 0;
    }
    if (lenb == lena)
    {
        for (int i = 0; i < lena; i++)
        {
            if (a[i] < b[i])
            {
                return 0;
            }
            if (a[i] > b[i])
            {
                return 1;
            }
        }
    }
    return 1;
}

// 去前导零
string qv0(string a)
{
    a.erase(0, (int)a.find_first_not_of('0'));
    return (a.length() == 0 ? "0" : a);
}

// 高精加
string add(string a, string b)
{
    a = qv0(a), b = qv0(b);
    int lena = a.length(), lenb = b.length();
    if (lenb > lena)
    {
        swap(lena, lenb), swap(a, b);
    }
    for (int i = 0; i < lena - lenb; i++)
    {
        b = '0' + b;
    }
    int lenc = max(lena, lenb);
    string c = "0";
    for (int i = 0; i < lenc; i++)
    {
        int x = a[i] - 96 + b[i];
        int num = i, jw = x / 10;
        while (jw)
        {
            c[num] += jw;
            c[num] > 57 ? c[num] -= 10, jw = 1 : jw = 0;
            num--;
        }
        c = c + char(x % 10 + 48);
    }
    return qv0(c);
}

// 高精减(两个正数)
string sub(string a, string b)
{
    a = qv0(a), b = qv0(b);
    bool isFushu = 0;
    if (!compare(a, b))
    {
        isFushu = 1, swap(a, b);
    }
    int lena = a.length(), lenb = b.length();
    for (int i = 0; i < lena - lenb; i++)
    {
        b = '0' + b;
    }
    string c;
    for (int i = 0; i < lena; i++)
    {
        int x = a[i] - b[i];
        int num = i - 1, jw = x < 0;
        while (jw)
        {
            c[num] -= jw;
            c[num] < 48 ? c[num] += 10, jw = 1 : jw = 0;
            num--;
        }
        c = c + char(x + (x < 0 ? 10 : 0) + 48);
    }
    return (isFushu ? "-" : "") + qv0(c);
}

// 高精乘
string mul(string a, string b)
{
    string c = "0";
    int lena = a.length(), lenb = b.length();
    string tempstr = "";
    int temp, t, cf;
    for (int i = lena - 1; i > -1; --i)
    {
        if (a[i] != '0')
        {
            tempstr = "", temp = a[i] - '0', t = 0, cf = 0;
            if (temp != 0)
            {
                for (int j = 1; j <= lena - 1 - i; j++)
                {
                    tempstr += "0";
                }
                for (int j = lenb - 1; j >= 0; j--)
                {
                    t = (temp * (b[j] - '0') + cf) % 10;
                    cf = (temp * (b[j] - '0') + cf) / 10;
                    tempstr = char(t + '0') + tempstr;
                }
                if (cf != 0)
                {
                    tempstr = char(cf + '0') + tempstr;
                }
            }
            c = add(c, tempstr);
        }
    }
    return c;
}

// 高精除(只有整数部分)
string div(string a, string b)
{
    a = qv0(a), b = qv0(b);
    int lena = a.length(), lenb = b.length();
    if (!compare(a, b))
    {
        return "0";
    }
    string c, d;
    for (int i = 0; i < lena - lenb + 1; i++)
    {
        c += "0", d += "0";
    }
    for (int i = 0; i < lena - lenb + 1; i++)
    {
        d[i]++;
        string temp = mul(d, b);
        while (compare(a, temp))
        {
            a = sub(a, temp);
            c[i]++;
        }
        d[i]--;
    }
    return qv0(c);
}

void Solution(int __T)
{
    // 注意数组大小
    int n;
    string a = "0", b = "1", c = "1", ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a = add(a, b);
        c = mul(c, a);
        ans = add(c, ans);
    }
    cout << ans;
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