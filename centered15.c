#include <stdio.h>

int isCentered15(int a[], int len)
{
	int i;
	int mid, sum = 0;

	mid = len/2;

	if(a[mid] == 15 && len % 2 != 0)
	{
		return (1);
	}
	if(len % 2 == 0)
	{
		for (i = 0; i < len; i++)
		{
			sum += a[i];
		}
		if (sum == 15)
			return (1);
		return (0);
	}

	for (i = 1; (mid + i) < len; i++)
	{
		if (a[mid + i] + a[mid - i] + a[mid] == 15)
			return (1);
	}
	return (0);
}
int main(void)
{
	int a[] = {3, 2, 10, 4, 1, 6, 9};
	int b[] = {2, 10, 4, 1, 6, 9};
	int c[] = {3, 2, 10, 4, 1, 6};
	int d[] = {1, 1, 8, 3, 1, 1};
	int e[] = {9, 15, 6};
	int f[] = {1, 1, 2, 2, 1, 1};
	int g[] = {1, 1, 15, -1, -1};

	printf("%d\n", isCentered15(a, 7));
	printf("%d\n", isCentered15(b, 6));
	printf("%d\n", isCentered15(c, 6));
	printf("%d\n", isCentered15(d, 6));
	printf("%d\n", isCentered15(e, 3));
	printf("%d\n", isCentered15(f, 6));
	printf("%d\n", isCentered15(g, 5));
}
