#include <cstdio>
using namespace std;

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a / 100);
    printf("%d\n",(a % 100)/ 50);
    printf("%d\n",(a % 50)/ 20);
    printf("%d\n",((a % 50)% 20)/ 10);
    printf("%d\n",(a % 10)/ 5);
    printf("%d",a % 5);

    return 0;
}