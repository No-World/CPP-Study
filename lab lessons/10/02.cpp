#include <iostream>
#include <cstring>
using namespace std;
void str_cat(char *p1, char *p2, char *p)
{
    while (*p1 != '\0')
    {
        *p = *p1;
        p++;
        p1++;
    }
    while (*p2 != '\0')
    {
        *p = *p2;
        p++;
        p2++;
    }
    *p = '\0';
}

int str_cmp(char *p1, char *p2)
{
    while (*p1 != '\0')
    {
        p1++;
    }
    while (*p2 != 0)
    {
        p2++;
    }
    if (*p1 > *p2)
        return 1;
    else if (*p1 < *p2)
        return 2;
    else
        return 0;
}

int str_len(char *p)
{
    int l = 0;
    while (*p != '\0')
    {
        p++;
        l++;
    }
    return l;
}

int main()
{
    char a[100], b[100], c[200];
    char *p;
    p = c;
    cout << "请输入第一个字符串1:" << endl;
    cin >> a;
    cout << "请输入第二个字符串2:" << endl;
    cin >> b;
    if (str_cmp(a, b) == 0)
        cout << "字符串1<字符串2" << endl;
    else if (str_cmp(a, b) == 1)
        cout << "字符串1>字符串2" << endl;
    else
        cout << "字符串1=字符串2" << endl;
    str_cat(a, b, p);
    cout << "字符串1+字符串2=" << p << endl;
    cout << "字符串1的长度=" << str_len(p);
    return 0;
}