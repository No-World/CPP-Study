#include <ctime>   //两个随机数
#include <cstdlib> //必要头文件
#include <cstdio>
#include <iostream>
#define MAXN 1000
using namespace std;

typedef long long ll;
long long random1(long long n)
{
    return (long long)rand() * rand() % n; // 超大数据
}
int random2(int a, int b)
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
    int n = 1e5, t = random1(1e5) + 1;
    printf("%d %d\n", n, t);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", random1(1e9) + 1);
    }
    printf("\n");

    return 0;
}