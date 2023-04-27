// #include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int m, n;
    cin >> m >> n;
    string line;
    getline(cin, line);
    string lines[m];
    for (int i = 0; i < m; i++)
    {
        getline(cin, lines[i]);
    }

    map<string, string> name;
    string value, key;
    for (int i = 1; i <= n; i++)
    {
        cin >> key;
        getline(cin, value);
        int l = value.length();
        string s;
        name[key] = value.substr(2, value.length() - 3);
    }
    for (int i = 0; i < m; i++)
    {
        int prev = 0, next = 0;
        for (;;)
        {
            if ((prev = lines[i].find("{{ ", prev)) == (int)string::npos)
            {
                break;
            }
            if ((next = lines[i].find(" }}", prev)) == (int)string::npos)
            {
                break;
            }
            key = lines[i].substr(prev + 3, next - prev - 3);
            lines[i].replace(prev, next - prev + 3, name.count(key) ? name[key] : "");
            prev += name.count(key) ? name[key].length() : 0;
        }
        cout << lines[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}