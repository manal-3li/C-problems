#include <stdio.h>
#define MAX 100
int main()
{
    int c, first, last, mid, n, search, array[MAX];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integers: ", n);
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&array[c]);
    printf("Enter value to find\n");
    scanf("%d",&search);
    first = 0;
    last = n - 1;
    mid = (first+last)/2;
    while( first <= last )
    {
        if ( array[mid] < search )
            first = mid + 1;
        else if ( array[mid] == search )
        {
            printf("%d found at location %d ", search, mid+1);
            break;
        }
        else
            last = mid - 1;
        mid = (first + last)/2;
    }
    if ( first > last )
        printf("%d is not found ", search);

}
