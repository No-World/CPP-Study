// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
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

map<string, string> mp;
string s;

void init()
{
    mp["q"] = "q";
    mp["iu"] = "q";
    mp["w"] = "w";
    mp["ei"] = "w";
    mp["e"] = "e";
    mp["r"] = "r";
    mp["uan"] = "r";
    mp["t"] = "t";
    mp["ue"] = "t";
    mp["y"] = "y";
    mp["un"] = "y";
    mp["u"] = "u";
    mp["sh"] = "u";
    mp["i"] = "i";
    mp["ch"] = "i";
    mp["o"] = "o";
    mp["uo"] = "o";
    mp["p"] = "p";
    mp["ie"] = "p";
    mp["a"] = "a";
    mp["s"] = "s";
    mp["ong"] = "s";
    mp["iong"] = "s";
    mp["d"] = "d";
    mp["ai"] = "d";
    mp["f"] = "f";
    mp["en"] = "f";
    mp["g"] = "g";
    mp["eng"] = "g";
    mp["h"] = "h";
    mp["ang"] = "h";
    mp["j"] = "j";
    mp["an"] = "j";
    mp["k"] = "k";
    mp["uai"] = "k";
    mp["ing"] = "k";
    mp["l"] = "l";
    mp["uang"] = "l";
    mp["iang"] = "l";
    mp["z"] = "z";
    mp["ou"] = "z";
    mp["x"] = "x";
    mp["ia"] = "x";
    mp["ua"] = "x";
    mp["c"] = "c";
    mp["ao"] = "c";
    mp["v"] = "v";
    mp["zh"] = "v";
    mp["ui"] = "v";
    mp["b"] = "b";
    mp["in"] = "b";
    mp["n"] = "n";
    mp["iao"] = "n";
    mp["m"] = "m";
    mp["ian"] = "m";
}

void Solution()
{
    // 注意数组大小
    string t = "";
    s += '\n';
    for (int i = 0; i < s.length(); i++)
    {
        string ans = "";
        string tt = "";
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            t += s[i];
        }
        else
        {
            if (t.length() == 2)
            {
                cout << t << s[i];
            }
            else if (t.length() == 1)
            {
                cout << t << t << s[i];
            }
            else
            {
                if (t[1] == 'h' && (t[0] == 'c' || t[0] == 's' || t[0] == 'z'))
                {
                    tt = t[0];
                    tt += t[1];
                    ans = mp[tt];
                    tt = t.substr(2);
                    ans += mp[tt];
                }
                else if (mp.count(t))
                {
                    cout << t[0] << mp[t] << s[i];
                }
                else
                {
                    tt = t[0];
                    ans = mp[tt];
                    tt = t.substr(1);
                    ans += mp[tt];
                }
                cout << ans << s[i];
            }
            t = "";
        }
    }
}

int main(int argc, char const *argv[])
{
    init();
    // ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    while (getline(cin, s))
    {
        Solution();
    }
    return 0;
}