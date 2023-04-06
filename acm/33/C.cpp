#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> mp;
    string s;
    while (cin >> s)
    {
        if ((s[0] >= 'a' && s[0] <= 'z'))
        {
            mp[s]++;
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first;
        printf(" %d\n", it->second);
    }

    return 0;
}