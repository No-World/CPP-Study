#include <cstdio>
#include <iostream>
using namespace std;
int b[1010];
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        for (int j = 0; j <= n; j++)
        {
            b[i] = max(a[j] - 'a' + 1, b[i]);
        }
    }
    for (int i = 1; i <= t; i++)
    {
        cout << b[i] << '\n';
    }
    
    return 0;
}