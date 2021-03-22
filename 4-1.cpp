#include <iostream>
int is_leap_year(int year)//判断闰年
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    int year = 1777, month = 4, day = 30;
    int d[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};//闰年特判
    std::cin >> num;
    num--;//此处有坑
    while (num != 0)//模拟日期增加
    {
        if (day < d[is_leap_year(year)][month-1])
        {
            day++;
        }
        else if (month < 12)
        {
            month++;
            day=1;
        }
        else
        {
            year++;
            month=1;
            day=1;
        }
        num--;
    }
    std::cout<<year<<" "<<month<<" "<<day<<std::endl;
    return 0;
}