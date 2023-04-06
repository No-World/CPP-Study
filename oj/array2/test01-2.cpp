#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int findNum(string s, int n, int &begin)
{
    int ans = 0;
    while (begin < n)
        if (s[begin] >= '0' && s[begin] <= '9')
            ans = ans * 10 + (s[begin++] - '0');
        else
            return ans;
    return ans;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size(), begin = 0;
    while (begin < n)
        if (s[begin] >= '0' && s[begin] <= '9')
            cout << findNum(s, n, begin) << endl;
        else
            begin++;
    return 0;
}