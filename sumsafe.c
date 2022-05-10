#include <stdio.h>

int isSumSafe(int a[], int len)
{
	int i, sum = 0;

	for (i = 0; i < len; i++)
		sum += a[i];
	for (i = 0; i < len; i++)
	{
		if (a[i] == sum)
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {5, -5, 0};
	int b[] = {5, -2, 1};

	printf("%d\n", isSumSafe(a, 3));
	printf("%d\n", isSumSafe(b, 3));
}

