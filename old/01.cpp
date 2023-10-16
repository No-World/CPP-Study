#include <iostream>
#include <string>
using namespace std;
bool is(string s, string t)
{
    if (s.size() != t.size())
        return false;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != t[i] && s[i] != '?')
            return false;
    return true;
}
int main()
{
    string s, t = "", tt = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        t += char('0' + i % 2 * 2), tt += ('0' + (i + 1) % 2 * 2);
    string c[7] = {"1", "12", "21", "101", "121", t, tt};
    for (int i = 0; i < 7; i++)
        if (is(s, c[i]))
        {
            cout << c[i] << endl;
            return 0;
        }
    cout << -1 << endl;
}