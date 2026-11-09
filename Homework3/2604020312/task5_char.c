/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 5 字符类型判断
 * 说明：读入一个字符，用 switch 判断元音，default 中再用 if 区分辅音、数字与其他字符
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>

int main(void)
{
    char ch;

    printf("请输入一个字符：");

    /* %c 在 scanf_s 中必须紧跟缓冲区大小参数；格式串前导空格用于跳过回车等空白 */
    if (scanf_s(" %c", &ch, 1) != 1)
    {
        printf("输入错误：没有读到字符。\n");
        return 0;
    }

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("'%c' 是元音字母。\n", ch);
        break;
    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("'%c' 是辅音字母。\n", ch);
        }
        else if (ch >= '0' && ch <= '9')
        {
            printf("'%c' 是数字字符。\n", ch);
        }
        else
        {
            printf("'%c' 是其他字符。\n", ch);
        }
        break;
    }

    return 0;
}
