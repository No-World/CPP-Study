#include <iostream>
#include <cstring>
#include <cstdio>
struct data
{
    int year;  //��Ӧ��
    int month; //��Ӧ��
    int day;   //��Ӧ��
};

int main()
{
    data start, endd;
    std::cin >> start.year >> start.month >> start.day;                //�����һ������
    std::cin >> endd.year >> endd.month >> endd.day;                   //����ڶ�������
    int yue[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //�·ݶ�Ӧ������������yue[1]����һ�µ�������
    if (start.year % 4 == 0 && start.year % 100 != 0 || start.year % 400 == 0)
        yue[2] = 29; //�����һ�������꣬������29�죻
    else
        yue[2] = 28;                                                                                 //�������꣬������28�죻
    int day, i, day1, ans;                                                                           // day �ǵ�һ�����ڵ�0��0��0�յ�������day1�ǵڶ������ڵ�0��0��0�յ�������
    day = start.year * 365 + (start.year - 1) / 4 - (start.year - 1) / 100 + (start.year - 1) / 400; //ͨ���ۼ�����е�һ�굽0�������������������1��03��01�յ�0��0��0�յ�������һ�꣬��365��
    day += start.day;                                                                                //���Ϲ���������
    for (i = 0; i < start.month; i++)
    {
        day += yue[i]; //���Ϲ���������������������1��03��01�յ�0��0��0�յ�������3���£������Ĺ��������£�1�£�2�£���0+31+28�죻
    }
    //��������ڶ������ڵ�0��0��0�յ�����
    if (endd.year % 4 == 0 && endd.year % 100 != 0 || endd.year % 400 == 0)
        yue[2] = 29;
    else
        yue[2] = 28;
    day1 = endd.year * 365 + (endd.year - 1) / 4 - (endd.year - 1) / 100 + (endd.year - 1) / 400 + endd.day;
    for (i = 0; i < endd.month; i++)
    {
        day1 += yue[i];
    }
    ans = day1 - day; //����֮��
    std::cout << ans;

    return 0;
}
