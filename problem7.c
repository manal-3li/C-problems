#include <stdio.h>
#include <stdlib.h>

int main()
{
   int y;
   printf("Enter the year: ");
   scanf("%d", &y);
   if (y%400==0) {
      printf("%d leap year.", y);
   }

   else if (y%100== 0) {
      printf("%d leap year.", y);
   }

   else if (y% 4 == 0) {
      printf("%d leap year.", y);
   }
   else {
      printf("%d leap year.", y);
   }

