#include <iostream>
using namespace std;

unsigned long long ans1, ans2;

int main()
{
    string a;
    cin >> a;
    while (a != "-1")
    {
        ans1 = 0, ans2 = 1;
        for (int i = 0; i < 64; i++)
        {
            if (a[63 - i] == '1')
                ans1 += ans2;
            ans2 *= 2;
        }
        cout << ans1 << endl;
        cin >> a;
    }

    return 0;
}