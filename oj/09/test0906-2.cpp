#include <iostream>
#include <stdio.h>
using namespace std;
struct P
{
    int a;
    string name;
    double money;
};
int main()
{
    double s;
    struct P n[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i].a >> n[i].name >> n[i].money;
        s += n[i].money;
    }
    double ans = s / 10;
    for (int i = 0; i < 10; i++)
        if (n[i].money > ans)
        {
            cout << n[i].a << " " << n[i].name << " ";
            printf("%.2lf\n", n[i].money);
        }
    return 0;
}