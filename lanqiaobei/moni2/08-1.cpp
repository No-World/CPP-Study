#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int n;
string s;

bool check(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
        if (s[i++] != s[j--])
            return false;
    return true;
}

int main()
{
    cin >> s;

    n = s.size();
    for (int i = 0, len = n; i < n; i++, len--)
    {
        string t = s.substr(i, len);
        if (check(t))
        {
            string prev = s.substr(0, i);
            string post = prev;
            if (prev.size())
            {
                reverse(post.begin(), post.end());
                cout << prev + t + post << endl;
                return 0;
            }
            else
            {
                cout << t << endl;
                return 0;
            }
        }
    }

    return 0;
}