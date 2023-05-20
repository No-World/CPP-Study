#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 3000 + 4; // 根据题目的最大值。+4为了防止A+B出现进位
char s1[MAXN] = {};        // 存储字符串
char s2[MAXN] = {};        // 存储字符串
int a[MAXN] = {};          // 存储加数A
int b[MAXN] = {};          // 存储加数B
int c[MAXN] = {};          // 存储和B

int main()
{
    scanf("%s %s", s1, s2); // 读入字符串A
    // 将字符串写入到数组A中
    int len1 = strlen(s1);
    for (int i = 0; i < len1; i++)
    {
        // 倒序写入
        a[i] = s1[len1 - i - 1] - '0';
    }

    // 将字符串写入到数组A中
    int len2 = strlen(s2);
    for (int i = 0; i < len2; i++)
    {
        // 倒序写入
        b[i] = s2[len2 - i - 1] - '0';
    }

    // 模拟竖式加法
    int jw = 0;                    // 进位
    int len = max(len1, len2) + 1; // 注意因为最高位可能出现进位
    for (int i = 0; i < len; i++)
    {
        c[i] = a[i] + b[i] + jw; // 当前加数A位数据+加数B位位数据+上一位的进位
        jw = c[i] / 10;          // 本次加法是否存在进位
        c[i] %= 10;              // 只能保存 0 ~ 9 的数据
    }

    // 删除前导零
    for (int i = len - 1; i >= 0; i--)
    {
        // 因为我们是从索引 0 开始，所以最高位是保存在 len-1
        if (0 == c[i] && len > 1)
        {
            // 注意要有 len>1 这个条件。考虑特殊情况，加法结果为 00，我们实际要输出 0。
            len--;
        }
        else
        {
            // 第一个不是零的最高位，结束删除
            break;
        }
    }

    // 逆序打印输出
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d", c[i]);
    }
    printf("\n");

    return 0;
}