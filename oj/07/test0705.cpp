#include <iostream>
using namespace std;

bool a[10000010];

int main()
{
    int n;
    long long ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
        for (int j = i + i; j <= n; j += i)
            a[j] = true;
    for (int i = 2; i <= n; i += 2)
    {
        if (!a[i])
            ans += i;
        if (i == 2)
            i--;
    }
    cout << ans;

    return 0;
}