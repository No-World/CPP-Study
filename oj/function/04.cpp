#include <cstdio>

int a(int n)
{
    for (int i = 2; i < n / i; i++)
        ;
    {
        if (n % 2 == 0) //��n%2==0����������
            return 0;
    }
    return 1; //������һ�����������������ж�������
}

int main()
{
    int i, n;
    int count = 0;
    scanf("%d", &n);
    for (i = 11; i <= n; i++)
    {
        if (a(i)) //�ж�������
        {
            if (i < 100 && i / 10 == i % 10) // i%10�жϸ�λ��i/10�ж�ʮλ��
                count++;
            else if (i > 100 && i < 1000 && i / 100 == i % 10) // i/100�жϰ�λ��
                count++;
            else if ((i > 1000 && i / 1000 == i % 10) && (i / 100 - i / 1000 * 10 == i % 100 - i % 10)) // i/100�жϰ�λ��
                count++;
        }
    }
    printf("%d", count);
    return 0;
}