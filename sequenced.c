#include <stdio.h>

int isSequencedArray(int a[], int len, int m, int n)
{
	int i, j, k = 0;
	int dlen = (n - m) + 1;
	int digit[dlen];

	if (a[0] != m || a[len - 1] != n)
		return (0);

	for (i = 1; i < len; i++)
	{
		if (a[i] < m || a[i] > n || a[i] < a[i - 1])
			return (0);
		/*printf("%d: test 1 passed\n", i);*/
		if ((a[i - 1] != a[i]) && (a[i] - a[i - 1] != 1))
		{	
			return (0);
		}
	}
	return (1);
}
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 3, 4, 2, 5};
	int c[] = {-5, -5, -4, -4, -4, -3, -3, -2, -2, -2};
	int d[] = {0, 1, 2, 3, 4, 5};
	int e[] = {1, 2, 3, 4};
	int f[] = {1, 2, 5};
	int g[] = {5, 4, 3, 2, 1};

	printf("%d\n", isSequencedArray(a, 5, 1, 5));
	printf("%d\n", isSequencedArray(b, 5, 1, 5));
	printf("%d\n", isSequencedArray(c, 10, -5, -2));
	printf("%d\n", isSequencedArray(d, 6, 1, 5));
	printf("%d\n", isSequencedArray(e, 4, 1, 5));
	printf("%d\n", isSequencedArray(f, 3, 1, 5));
	printf("%d\n", isSequencedArray(g, 5, 1, 5));
}
