#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cctype>

using namespace std;
using i64 = long long int;

char opposite(char c)
{
    return islower(c) ? toupper(c) : tolower(c);
}

void solve()
{
    int length, ops;
    string word;

    cin >> length >> ops >> word;

    map<char, int> record;
    for (auto c : word)
    {
        record[c]++;
    }

    int burls = 0;

    for (auto &[c, count] : record)
    {
        int matches = min(count, record[opposite(c)]);
        burls += matches;
        record[opposite(c)] -= matches;
        count -= matches;
    }

    for (auto &[c, count] : record)
    {
        if (ops >= count / 2)
        {
            burls += count / 2;
            ops -= count / 2;
            count = count / 2;
        }
        else if (ops > 0 && ops <= count / 2)
        {
            burls += ops;
            count -= ops * 2;
            ops = 0;
        }
    }

    cout << burls << '\n';
}

int main()
{
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        solve();
    }
}
