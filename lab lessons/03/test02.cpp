#include <iostream>

using namespace std;

// 计算两个整数的最大公约数
int gcd(int m, int n)
{
    // 如果n为0，则最大公约数为m
    if (n == 0)
        return m;

    // 否则，递归调用gcd函数，直到n为0
    return gcd(n, m % n);
}

// 计算两个整数的最小公倍数
int lcm(int m, int n)
{
    // 使用最大公约数计算最小公倍数
    return (m * n) / gcd(m, n);
}

int main()
{
    int m, n;

    // 读入两个整数
    cin >> m >> n;

    // 计算并输出最大公约数
    cout << "最大公约数：" << gcd(m, n) << endl;

    // 计算并输出最小公倍数
    cout << "最小公倍数：" << lcm(m, n) << endl;

    return 0;
}
