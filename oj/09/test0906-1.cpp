#include <cstdio>
#include <iostream>
using namespace std;
struct zhanghu
{
    int id;
    string xm;
    double ye;
};
int main()
{
    double s;
    struct zhanghu zh[11];
    for (int i = 1; i <= 10; i++)
    {
        cin >> zh[i].id >> zh[i].xm >> zh[i].ye;
        s += zh[i].ye;
    }
    double ans = s / 10;
    for (int i = 1; i <= 10; i++)
        if (zh[i].ye > ans)
        {
            cout << zh[i].id << ' ' << zh[i].xm << ' ';
            printf("%.2f\n", zh[i].ye);
        }
    return 0;
}