#include <iostream>

using namespace std;

int main() {
  int s = 0; // 初始化总和为0

  // 循环计算每个整数的和
  for (int i = 1; i <= 5; i++) {
    int n = 0; // 初始化当前整数为0
    for (int j = 1; j <= i; j++) {
      n = n * 10 + j; // 拼接当前整数
    }
    s += n; // 累加总和
  }

  // 输出结果
  cout << "1+12+123+1234+12345=" << s << endl;

  return 0;
}