/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 4 英寸转厘米（附加题）
 * 说明：用循环输出 1~5 英寸对应的厘米值，1 inch = 2.54 cm
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>
int main()
{
    int inch;
    for (inch = 1; inch <= 5; inch++)
        printf("%d inch = %5.2f cm\n", inch, inch * 2.54);
    return 0;
}
