/*题目描述
翻转一个由n个元素构成的数组(1<=n<=1000)
输入格式
第一行一个整数n第二行n个用空格隔开的整数，绝对值不超过32767
输出格式
把这n个整数逆序输出，相邻两个整数之间用一个空格隔开。
样例输入
5
1 2 3 4 5
样例输出
5 4 3 2 1
提示
提示：1.使用一维数组存储数据。2.用for循环正序反序访问数组.
*/

#include <cstdio>
using namespace std;

int main()
{
    int a[1001],b[1001],n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i ++)
        scanf("%d", &a[i]);
    for(int i = 0 ; i < n ; i ++)
        b[n-i-1] = a[i];
    for(int i = 0 ; i < n ; i ++)
        printf("%d ",b[i]);
    return 0;
}