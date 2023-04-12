#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX];
    int freq[MAX];
    int n, i, j;

    printf("Enter num of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i=0; i<n; i++)
    {
      int c = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                freq[j] = 0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i] = c;
        }
    }

    printf("Frequency of each element of array: ");
    for(i=0; i<n; i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

}
