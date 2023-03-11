#include <stdio.h>
#include <stdlib.h>

int main()
{
  char result;
  double n1,n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &result);
  printf("Enter first number: ");
  scanf("%lf", &n1);
  printf ("Enter second number: ");
  scanf("%1f", &n2);

  switch (result) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", n1,n2,n1+n2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", n1,n2,n1-n2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
      break;
}  }
