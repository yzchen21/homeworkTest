/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 3 格式化表格
 * 说明：用 printf 的宽度修饰符输出一张对齐的商品价目表
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>
int main()
{
    printf("%6s %-12s %10s\n", "编号", "名称", "单价");
    printf("%6d %-12s %10.2f\n", 1, "铅笔", 1.50);
    printf("%6d %-12s %10.2f\n", 2, "笔记本", 5.80);
    printf("%6d %-12s %10.2f\n", 3, "橡皮", 0.75);
    printf("%6d %-12s %10.2f\n", 4, "圆规", 12.00);
    return 0;
}