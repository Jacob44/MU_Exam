#include <stdio.h>

int sumFactor(int a[ ], int len)
{
	int sum = 0;
	int i, count = 0;

	for (i = 0; i < len; i++)
	{
		sum += a[i];
	}
	for (i = 0; i < len; i++)
	{
		if(a[i] == sum)
			count++;
	}
	return (count);
}
int main(void)
{
	int a[] = {3, 0, 2, -5, 0};
	int b[] = {9, -3, -3, -1, -1};
	int c[] = {1};
	int d[] = {0, 0, 0};

	printf("%d\n", sumFactor(a, 5));
	printf("%d\n", sumFactor(b, 5));
	printf("%d\n", sumFactor(c, 1));
	printf("%d\n", sumFactor(d, 3));
}
