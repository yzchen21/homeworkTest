#include <stdio.h>
int main()
{
    int inch;
    for (inch = 1; inch <= 5; inch++)
        printf("%d inch = %5.2f cm\n", inch, inch * 2.54);
    return 0;
}
