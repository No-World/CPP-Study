/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <bitset>
using namespace std;
typedef std::pair<int, int> PII;
using i64 = long long;
typedef long long ll;
const int N = 1e6 + 10;
int n, k, m;
#define X first
#define Y second
void solve()
{
    std::bitset<60> s, t;
    std::cin >> s >> t;
    i64 x = s.to_ulong();
    i64 y = t.to_ulong();
    if (x == 0 && x != y)
    {
        std::cout << -1 << '\n';
        return;
    }
    std::cout << std::abs(x - y) << '\n';
    return;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0), std::cout.tie(0);
    int T;
    T = 1;
    // std::cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
