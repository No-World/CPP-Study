#include <cstdio>
using namespace std;

int main()
{
    int i = 1, sum = 0;
    printf("while：1+3+5+…+101的和为：");
    sum += i;
    while (i += 2)
    {
        sum += i;

        if (i == 101)
            break;
    }
    printf("%d\n", sum);

    i = 1;
    sum = 0;
    printf("do…while：1+3+5+…+101的和为：");
    do
    {
        sum += i;
        i = i + 2;
    } while (i <= 101);
    printf("%d\n", sum);

    i = 1;
    sum = 0;
    printf("for：1+3+5+…+101的和为：");
    for (int i = 1; i < 102; i += 2)
        sum += i;
    printf("%d", sum);

    return 0;
}