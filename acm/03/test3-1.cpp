#include <iostream>
const int mod = 65537;

long long fbnq[1000000];
using namespace std;
int main()
{
    fbnq[1] = fbnq[2] = 1;
    for (int i = 3 ; i <= 1000000 ; i ++)
        fbnq[i] = (fbnq[i - 1] + fbnq[i - 2]) % mod;
    int n;
    while (cin >> n)
    {
        cout << fbnq[n] << '\n';
    }
    return 0;
}