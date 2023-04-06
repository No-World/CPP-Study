#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    // 构建素数表
    vector<bool> isPrime(n + 1, true); // 初始全为 true
    isPrime[0] = isPrime[1] = false;   // 0 和 1 不是质数
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        { // i 是质数，将 i 的倍数标记为非质数
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // 处理每个询问
    int x;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (x <= n && isPrime[x])
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
