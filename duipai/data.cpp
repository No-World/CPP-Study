#include <ctime>   //两个随机数
#include <cstdlib> //必要头文件
#include <cstdio>
#define MAXN 1000
using namespace std;

typedef long long ll;
long long random1(long long n)
{
    return (long long)rand() * rand() % n;
}
int random2(int a, int b)
{
    return (long long)rand() * rand() % (b - a + 1) + a; // QuJian
}
double random3(int n)
{
    return (rand() % n) / 10; // XiaoShu
}

int main()
{
    srand((unsigned)time(NULL));
    int t = rand() % 10 + 1;
    printf("%d\n", t);
    for (int i = 0; i < t; i++)
    {
        int j = rand() % 10;
        while (i == 0 && j == 0)
        {
            j = rand() % 10;
        }
        printf("%d", j);
    }
    printf("\n");
    return 0;
}
