/*
 * 学号：2604020312
 * 姓名：余梓宸
 * 班级：26电子信息工程3班
 * 题目：Task 1 菜单选择
 * 说明：输出学生成绩管理系统菜单，用 switch 处理 1~4 的选择，非法输入给出提示
 * 环境：Visual Studio / MSVC x64，源文件编码 UTF-8
 */
#include <stdio.h>

int main(void)
{
    int choice;

    printf("===== 学生成绩管理系统 =====\n");
    printf("  1. 录入成绩\n");
    printf("  2. 查询成绩\n");
    printf("  3. 修改成绩\n");
    printf("  4. 退出系统\n");
    printf("============================\n");
    printf("请输入你的选择：");

    if (scanf_s("%d", &choice) != 1)
    {
        printf("输入错误：请输入 1~4 之间的数字。\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("你选择了：录入成绩\n");
        break;
    case 2:
        printf("你选择了：查询成绩\n");
        break;
    case 3:
        printf("你选择了：修改成绩\n");
        break;
    case 4:
        printf("你选择了：退出系统\n");
        break;
    default:
        printf("输入错误：请输入 1~4 之间的数字。\n");
        break;
    }

    return 0;
}
