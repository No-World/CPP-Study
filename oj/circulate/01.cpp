#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a , b ;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        printf("%d\n",__gcd(a,b));
    }
    return 0;
}