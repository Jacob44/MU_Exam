#include <stdio.h>

int matches(int a[], int len, int p[])
{
	int i, j, tmp, k = 0, sum = 0;

	for (i = 1; i < p[0]; i++)
	{
		tmp = p[i];
		if (p[i] < 0)
			tmp = -1 * p[i];			
		sum += tmp;
	}
	if (sum != len)
		return (0);
	for (j = 1; j < p[0]; j++)
	{
		if (p[j] == 0)
			return (0);
		if (p[j] < 0)
		{
			tmp = p[j] * -1;

			for (i = k; i < (k + tmp); i++)
			{
				if (a[i] >= 0)
				{
					/*printf("j: %d a[%d] = %d should be negative \n", j, i, a[i]);*/
					return (0);
				}
			}
			k += tmp;
		}
		if (p[j] > 0)
		{
			tmp = p[j];
			for (i = k; i < (k + tmp); i++)
			{
				if (a[i] <= 0)
				{
					/*printf("j: %d a[%d] = %d\n", j, i, a[i]);*/
					return (0);
				}
			}
			k += p[j];
		}
		/*printf("k: %d\n", k);*/
	}
	return (1);
}
int main(void)
{
	int A[] = {1, 2, 3, -5, -5, 2, 3, 18};
	int p1[] = {4, 3, -2, 3};
	int p2[] = {7, 2, 1, -1, -1, 2, 1};
	int p3[] = {7, 1, 2, -1, -1, 1, 2};
	int p4[] = {5, 2, 1, -2, 3};
	int p5[] = {9, 1, 1, 1, -1, -1, 1, 1, 1};
	int p6[] = {4, 4, -1, 3};
	int p7[] = {4, 2, -3, 3};
	int p8[] = {2, 8};

	printf("%d\n", matches(A, 8, p1));
	printf("%d\n", matches(A, 8, p2));
	printf("%d\n", matches(A, 8, p3));
	printf("%d\n", matches(A, 8, p4));
	printf("%d\n", matches(A, 8, p5));
	printf("%d\n", matches(A, 8, p6));
	printf("%d\n", matches(A, 8, p7));
	printf("%d\n", matches(A, 8, p8));
}
