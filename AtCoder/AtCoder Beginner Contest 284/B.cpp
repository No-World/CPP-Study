#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        long long a;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a % 2 != 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}