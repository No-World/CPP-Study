#include <iostream>

using namespace std;

// 判断一个整数是否为水仙花数
bool is_narcissistic_number(int n)
{
    // 提取出n的个位数，十位数和百位数
    int a = n % 10;
    int b = (n / 10) % 10;
    int c = n / 100;

    // 判断n是否为水仙花数
    return (n == a * a * a + b * b * b + c * c * c);
}

int main()
{
    // 枚举100到999之间的整数
    for (int i = 100; i <= 999; i++)
    {
        // 如果i是水仙花数，则输出
        if (is_narcissistic_number(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}