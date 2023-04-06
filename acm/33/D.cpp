#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> mp;
    int n, m;
    scanf("%d", &n);
    while (n--)
    {
        string s;
        int x;
        cin >> s;
        scanf("%d", &x);
        mp[s] = x;
    }
    scanf("%d", &m);
    while (m--)
    {
        string s;
        cin >> s;
        printf("%d\n", mp[s]);
    }
    
    return 0;
}
