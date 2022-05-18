#include <stdio.h>

int *encodeNumber(int n)
{
	int i = 2, j, count = 0, flag = 0;
	int tmp = n;
	int a2[] = {2};
	int *p2 = a2;

	if (n <= 1)
		return (NULL);
	
	if (n == 2)
		return (p2);
	while(tmp > 1)
	{
		if (tmp % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					flag = 1;
			}
			if (!flag)
			{
				count++;
				tmp /= i;
				printf("prime: %d\n", i);
				i = 2;
			}
			else
				i++;
		}
		else
			i++;
		flag  = 0;
	}
	printf(" count = %d\n", count);
	int a[count];
	i = 2;
	int v = 0;
	int *p = a;
	flag = 0;

	while(n > 1)
	{
		if (n % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					flag = 1;
			}
			if (!flag)
			{
				a[v] = i;
				n /= i;
				i = 2;
				v++;
				printf("a[%d] = %d\n", v, a[v]);
			}
			else
				i++;
		}
		else
			i++;
		flag = 0;
	}
	return (p);
}

int main(void)
{
	/*int n[] = {2};
	int i = 0;*/

	int *k = encodeNumber(6);
	
	printf("%d\n", k[0]);
	printf("%d\n", k[1]);	
}
