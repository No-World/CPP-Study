#include <ctime>   //两个随机数
#include <cstdlib> //必要头文件
#include <cstdio>
#include <iostream>
#define MAXN 1000aw
using namespace std;

typedef long long ll;
long long random1(long long n)
{
    return (long long)rand() * rand() % n; // 超大数据
}
long long random2(long long a, long long b)
{
    return (long long)rand() * rand() % (b - a + 1) + a; // 区间
}
double random3(int n)
{
    return (rand() % n) / 10; // 小数
}

int main()
{
    srand((unsigned)time(NULL));
    int n = random1(1e3) + 2;
    printf("1\n%d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", random1(n));
    }

    return 0;
}