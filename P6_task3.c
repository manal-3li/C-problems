#include <stdbool.h>
int PrimeOrNot(int);
int main()
{
    int n,p;

    printf(" Input a positive number : ");
    scanf("%d",&n);
    p = PrimeOrNot(n);
   if(p==1)
        printf("prime number",n);
   else
      printf("not a prime number",n);
   return 0;
}
int PrimeOrNot(int n)
{
    int i=2;
    while(i<=n/2)
    {
         if(n%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}
