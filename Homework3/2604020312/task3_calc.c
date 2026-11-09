/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 3 简易四则运算器
 * 说明：读入「数 运算符 数」，用 switch 完成 + - * / 运算，并处理除数为 0 与非法运算符
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("请输入算式（如 12 + 5）：");

    /* %c 在 scanf_s 中必须紧跟缓冲区大小参数，否则参数错位 */
    if (scanf_s("%d %c %d", &a, &op, 1, &b) != 3)
    {
        printf("输入错误：不支持的运算符。\n");
        return 0;
    }

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("输入错误：除数不能为 0。\n");
        }
        else
        {
            printf("%d / %d = %d\n", a, b, a / b);
        }
        break;
    default:
        printf("输入错误：不支持的运算符。\n");
        break;
    }

    return 0;
}
