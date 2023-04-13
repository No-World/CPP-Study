// Problem: I. Equal Sum Arrays
// Contest: Codeforces - The 17th Heilongjiang Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103688/problem/I
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <queue>
// #include <map>
// #include <vector>
using namespace std;
const int inf = 0x3f3f3f3f, N = 1010;

inline void Solution()
{
    int n, ans = 1;
    scanf("%d", &n);
    ans = ans << (n - 1);
    printf("%d\n", ans);
}

int main(int argc, char const *argv[])
{
    int t = 1;
    // scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}