#include <stdio.h>

int largestAdjacentSum(int a[], int len)
{
	if (len < 2)
		return (0);
	int i, sum = a[0] + a[1];
	for (i = 0; i < (len - 1); i++)
	{
		if ((a[i] + a[i + 1]) > sum)
			sum = a[i] + a[i + 1];
	}
	return sum;
}
int main(void)
{
	int a[] = {1, 2, 3, 4};
	int b[] = {18, -12, 9, -10};
	int c[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
	int d[] = {1, 1, 1, 1, 1, 2, 1, 1, 1};

	printf("%d\n", largestAdjacentSum(a, 4));
	printf("%d\n", largestAdjacentSum(b, 4));
	printf("%d\n", largestAdjacentSum(c, 9));
	printf("%d\n", largestAdjacentSum(d, 9));
}
