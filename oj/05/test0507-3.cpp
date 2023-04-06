#include <iostream>
#include <cstring>
#include <cstdio>
struct data
{
    int year;  //对应年
    int month; //对应月
    int day;   //对应日
};

int main()
{
    data start, endd;
    std::cin >> start.year >> start.month >> start.day;                //输入第一个日期
    std::cin >> endd.year >> endd.month >> endd.day;                   //输入第二个日期
    int yue[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //月份对应的天数（例如yue[1]就是一月的天数）
    if (start.year % 4 == 0 && start.year % 100 != 0 || start.year % 400 == 0)
        yue[2] = 29; //如果这一年是闰年，二月有29天；
    else
        yue[2] = 28;                                                                                 //不是闰年，二月有28天；
    int day, i, day1, ans;                                                                           // day 是第一个日期到0年0月0日的天数，day1是第二个日期到0年0月0日的天数；
    day = start.year * 365 + (start.year - 1) / 4 - (start.year - 1) / 100 + (start.year - 1) / 400; //通过累加算出有第一年到0年的年数的天数（例如1年03月01日到0年0月0日的年数是一年，有365天
    day += start.day;                                                                                //加上过的天数；
    for (i = 0; i < start.month; i++)
    {
        day += yue[i]; //加上过的月数的天数，（例如1年03月01日到0年0月0日的月数是3个月，完整的过了两个月，1月，2月，有0+31+28天；
    }
    //下面是算第二个日期到0年0月0日的天数
    if (endd.year % 4 == 0 && endd.year % 100 != 0 || endd.year % 400 == 0)
        yue[2] = 29;
    else
        yue[2] = 28;
    day1 = endd.year * 365 + (endd.year - 1) / 4 - (endd.year - 1) / 100 + (endd.year - 1) / 400 + endd.day;
    for (i = 0; i < endd.month; i++)
    {
        day1 += yue[i];
    }
    ans = day1 - day; //天数之差
    std::cout << ans;

    return 0;
}
