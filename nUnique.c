#include <stdio.h>

int isNUnique(int a[], int len, int n)
{
	int i, j, sum, count = 0;

	if (len < 2)
		return (0);
	for(i = 0; i < (len - 1); i++)
	{
		for(j = i + 1; j < len; j++)
		{
			sum = 0;
			sum = a[i] + a[j];
			if(sum == n)
			{
				count++;
				if (count > 1)
					return (0);
			}
		}
	}
	if (count == 0)
		return (0);
	return (1);
}

int main(void)
{
	int a[] = {7, 3, 3, 2, 4};
	int c[] = {1};

	printf("%d\n", isNUnique(a, 5, 6));
	 printf("%d\n", isNUnique(a, 5, 10));
	  printf("%d\n", isNUnique(a, 5, 11));
	   printf("%d\n", isNUnique(a, 5, 8));
	    printf("%d\n", isNUnique(a, 5, 4));
	     printf("%d\n", isNUnique(c, 1, 10));

}
