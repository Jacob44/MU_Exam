#include <stdio.h>

int isWave(int a[], int len)
{
	int i;

	if (len < 2)
		return (1);

	for (i = 1; i < len; i++)
	{
		//printf("%d\n", i);
		if ((a[i - 1] % 2 == 0 && a[i] % 2 == 0) || (a[i - 1] % 2 != 0 && a[i] % 2 != 0))
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {7, 2, 9, 10, 5};
	int b[] = {4, 11, 12, 1, 6};
	int c[] = {1, 0, 5};
	int d[] = {2};
	int e[] = {2, 6, 3, 4};

	printf("%d\n", isWave(a, 5));
	printf("%d\n", isWave(b, 5));
	printf("%d\n", isWave(c, 3));
	printf("%d\n", isWave(d, 1));
	printf("%d\n", isWave(e, 4));
}
