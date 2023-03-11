#include <stdio.h>
#include <stdlib.h>

int main()
{
 double num, exp, result;
    printf("Enter number: ");
    scanf("%lf", &base);
    printf("Enter exp: ");
    scanf("%lf", &exp);

    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", num, exp, result);

}
