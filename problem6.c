#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c;
    int lower,upper;
    printf("Enter character: ");
    scanf("%c", &c);

    lower= (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    upper= (c=='A'||c=='E'||c=='I'||c=='O'||c =='U');

    if (lower||upper)
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);
}
