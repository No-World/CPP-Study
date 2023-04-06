#include <cstdio>
using namespace std;
int cj[10];
int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    double ans = 0;
    printf("请输入10个成绩：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &cj[i]);
        ans += cj[i];
        switch (cj[i] / 10)
        {
        case 9 ... 10:
            a++;
            break;
        case 8:
            b++;
            break;
        case 7:
            c++;
            break;
        case 6:
            d++;
        default:
            e++;
            break;
        }
    }
    ans /= 10;
    printf("优：%d\n良：%d\n中：%d\n及格：%d\n不及格：%d\n平均分：%.1f\n", a, b, c, d, e, ans);
    return 0;
}