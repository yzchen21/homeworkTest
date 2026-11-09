/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 2 成绩等级判定
 * 说明：读入 0~100 的分数，非法范围报错；用 switch (score / 10) 映射为 A~E 等级
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>

int main(void)
{
    int score;

    printf("请输入分数：");
    if (scanf_s("%d", &score) != 1)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
        return 0;
    }

    if (score < 0 || score > 100)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
        return 0;
    }

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("分数 %d，等级：A\n", score);
        break;
    case 8:
        printf("分数 %d，等级：B\n", score);
        break;
    case 7:
        printf("分数 %d，等级：C\n", score);
        break;
    case 6:
        printf("分数 %d，等级：D\n", score);
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("分数 %d，等级：E\n", score);
        break;
    default:
        printf("输入错误：分数应在 0~100 之间。\n");
        break;
    }

    return 0;
}
