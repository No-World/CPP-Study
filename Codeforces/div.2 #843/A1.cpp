#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        cin >> s;
        char s1 = ' ';
        int l = s.length();
        if ((s[l - 1] <= s[1] && s[0] <= s[1]) || (s[l - 1] >= s[1] && s[0] >= s[1]))
        {
            s.insert(l - 1, 1, s1);
            s.insert(1, 1, s1);
            cout << s << endl;
        }
        else
        {
            cout << ":(" << endl;
        }
    }
    return 0;
}