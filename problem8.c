#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
    unsigned long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial %d = %llu", n, fact);
    }
