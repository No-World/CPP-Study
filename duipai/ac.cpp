#include <iostream>
#include <stack>
#include <string>
using namespace std;
long long cd(long long x)
{
    return x * (x + 1) / 2;
}
int main()
{
    int n, flag = 0;
    string s;
    cin >> n >> s;
    s = ' ' + s;
    long long ans = 0, len = 0;
    for (int i = 1; i <= n; i++)
    {
        if (flag == 0)
        {
            len++;
            if (s[i] == '1')
                flag = 1;
            if (s[i] == '4')
                flag = 4;
        }
        else if (flag == 1)
        {
            if (s[i] == '4')
            {
                ans += cd(len);
                len = 1;
                flag = 4;
            }
            else
                len++;
        }
        else if (flag == 4)
        {
            if (s[i] == '1')
            {
                ans += cd(len);
                len = 1;
                flag = 1;
            }
            else
                len++;
        }
    }
    ans += cd(len);
    cout << ans;
    return 0;
}