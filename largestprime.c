#include <stdio.h>

int largestPrimeFactor(int n)
{
	int i = 2, j, max = 0, flag = 0;

	for (i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			if (i == 2)
				max = 2;
			else
			{
				for (j = 2; j < i; j++)
				{
					if (i % j == 0)
						flag = 1;
				}
				if (!flag)
				{
					max = i;
				}
			}
		}
		flag = 0;
	}
	return (max);
}
int main(void)
{
	int a[] = {10, 6936, 1};
	int i;

	for (i = 0; i < 3; i++)
		printf("%d\n",largestPrimeFactor(a[i]));
}
