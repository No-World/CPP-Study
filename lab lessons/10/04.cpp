#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
using namespace std;
void count(char a[], int n)
{
    int m = 0, y = 0, z = 0, u = 0, r = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == ' ')
            m++;
        else if ('A' <= a[i] && a[i] <= 'Z')
            y++;
        else if ('a' <= a[i] && a[i] <= 'z')
            z++;
        else if ('0' <= a[i] && a[i] <= '9')
            u++;
        else
            r++;
    cout << "大写字符：" << y << endl
         << "小写字符： " << z << endl
         << "数字字符：" << u << endl
         << "空格字符: " << m << endl
         << "其他字符：" << r;
}
int main()
{
    char *p = NULL;
    char a[100];
    cout << "请输入字符串：";
    scanf("%[^\n]", a);
    p = a;
    int n = strlen(a);
    count(a, n);
    return 0;
}