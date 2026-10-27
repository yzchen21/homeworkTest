/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 2 基本数据类型
 * 说明：定义 int / float / double / char 四种变量并输出，对比 float 与 double 的精度差异
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>
int main()
{
    int     age     = 19;
    float   height  = 1.72f;
    double  pi      = 3.14159265358979323846;
    char    blood   = 'A';
    printf("int     age     = %d\n", age);
    printf("float   height  = %.6f\n", height);
    printf("double  pi      = %.15f\n", pi);
    printf("char    blood   = %c\n", blood);
    printf("\n");
    printf("pi 作为 float  : %.15f\n", 3.14159265358979323846f);
    printf("pi 作为 double : %.15f\n", pi);
    return 0;
}
