#include <iostream>
#include <vector>
#define M 1010
#define ll long long
using namespace std;
// 定义质数
ll P = 131313;
vector<ll> str1_vc, str2_vc;
string str1, str2;
int dp[M][M] = {{0}};

// 获取散列值
int getHash(string str)
{
    ll hash = 0;
    for (char c : str)
    {
        hash += (long)c - 'a' + 1;
        hash *= P;
    }
    return hash;
}

// 将字符串中的蓝肽转为散列值存储vector中
void build(vector<ll> &vec, string &str)
{
    int len = str.size();
    int l, r;
    l = r = 0;
    while (r != len)
    {
        ++r;
        if (str[r] <= 'Z' && str[r] >= 'A')
        {
            vec.push_back(getHash(str.substr(l, r - l)));
            l = r;
        }
    }
    if (r != l)
    {
        vec.push_back(getHash(str.substr(l, r - l)));
    }
}
int main()
{
    cin >> str1;
    cin >> str2;
    build(str1_vc, str1);
    build(str2_vc, str2);

    int len1, len2;
    len1 = str1_vc.size();
    len2 = str2_vc.size();

    for (int i = 1; i <= len1; ++i)
    {
        for (int j = 1; j <= len2; ++j)
        {
            if (str1_vc[i - 1] == str2_vc[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[len1][len2];
    return 0;
}
