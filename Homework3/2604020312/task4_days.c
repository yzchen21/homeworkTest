/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 4 年月天数计算
 * 说明：输入年份和月份，用 switch 分支求当月天数，2 月用闰年规则判断
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>

int main(void)
{
    int year, month, days;

    printf("请输入年份和月份：");
    if (scanf_s("%d %d", &year, &month) != 2)
    {
        printf("输入错误：月份应在 1~12 之间。\n");
        return 0;
    }

    if (month < 1 || month > 12)
    {
        printf("输入错误：月份应在 1~12 之间。\n");
        return 0;
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    default:
        days = 0;
        break;
    }

    printf("%d 年 %d 月有 %d 天。\n", year, month, days);

    return 0;
}
