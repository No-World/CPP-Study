#include <cstdio>
using namespace std;

int main()
{
    char a;
    int b;
    scanf("%c", &a );
    b = a % 2;

    if (b == 0)
    printf("NO");
    else
    printf("YES");
    
    return 0;
}