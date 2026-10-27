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
