#include <iostream>

int main()
{
    int num1, num2, num3;

    // 从键盘输入三个不同的正整数
    std::cin >> num1;

    std::cin >> num2;

    std::cin >> num3;

    // 计算和、平均值、积、最小值和最大值
    int sum = num1 + num2 + num3;
    int average = static_cast<double>(sum) / 3;
    int product = num1 * num2 * num3;
    int minNum = std::min(std::min(num1, num2), num3);
    int maxNum = std::max(std::max(num1, num2), num3);

    // 输出结果在一行
    std::cout << sum << " " << average << " " << product << " " << minNum << " " << maxNum << std::endl;

    return 0;
}