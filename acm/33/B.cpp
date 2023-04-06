#include <set>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    set<string> st;
    int n, m;
    scanf("%d", &n);
    while (n--)
    {
        string x;
        cin >> x;
        st.insert(x);
    }
    int ans = 0;
    scanf("%d", &m);
    while (m--)
    {
        string x;
        cin >> x;
        if (st.count(x))
        {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}