#include <stdio.h>
#include<conio.h>


int main()
{
	int a[100],n,i,j;
	printf("the num of elements in array: ");
        scanf("%d",&n);
        printf("Enter the elements: ");

      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("Ascending : ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] < a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("Descending : ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}

	return 0;
}
