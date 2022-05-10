#include <stdio.h>

int stantonMeasure(int a[ ], int len)
{
	int i, cnt = 0, count = 0;

	for (i = 0; i < len; i++)
	{
		if (a[i] == 1)
			cnt++;
	}
	for (i = 0; i < len; i++)
	{
		if (a[i] == cnt)
			count++;
	}
	return (count);
}
int main(void)
{
	int a[] = {1};
	int b[] = {0};
	int c[] = {3, 1, 1, 4};
	int d[] = {1, 3, 1, 1, 3, 3, 2, 3, 3, 3, 4};
	int e[] = {};

	printf("%d\n", stantonMeasure(a, 1));
	printf("%d\n", stantonMeasure(b, 1));
	printf("%d\n", stantonMeasure(c, 4));
	printf("%d\n", stantonMeasure(d, 11));
	printf("%d\n", stantonMeasure(e, 0));
}
