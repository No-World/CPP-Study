#include <cstdio>
using namespace std;
char a[110], b[] = {'0', '1', '1', '3', '4', '7', '2', '8', '5', '0', '8', ':'};
int main()
{
    scanf("%s", a + 1);
    bool flag = false;
    for (int i = 1; a[i] == b[i] && i <= 11; i++)
    {
        if (b[i] == ':')
        {
            flag = true;
        }
    }
    if (flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}