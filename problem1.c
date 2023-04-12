#include <stdio.h>
#include <stdlib.h>

int main()
{
 double base, exp, result;
    printf("Enter number: ");
    scanf("%lf", &base);
    printf("Enter exp: ");
    scanf("%lf", &exp);

    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);

}
