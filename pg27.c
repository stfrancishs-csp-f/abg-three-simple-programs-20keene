#include <stdio.h>
int main(void)

{
    float a,b;

    printf ("How much of a bonus did you get?");
    scanf("%f", &a);
    b = .85 * a;
    printf("If you give 15 percent to charity, you will stll");
    printf(" have %.2lf.", b);
    return 0;

}