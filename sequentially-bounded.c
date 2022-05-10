#include <stdio.h>

int isSequentiallyBounded(int a[], int len)
{
	int count = 1, i;

	if (len == 0)
		return (1);
	if (len == 1)
	{
		if (a[0] > 1)
			return (1);
		return (0);
	}

	for (i = 0; i < (len - 1); i++)
	{
		if (a[i] > a[i + 1])
			return (0);
		if (a[i] == a[i + 1])
		{
			count++;
			if (count >= a[i])
				return (0);
		}
		else
		{
			count = 1;
			if (count >= a[i])
				return (0);			
		}
	}
	return (1);
}
int main(void)
{
	int a[] = {0, 1};
	int b[] = {-1, 2};
	int c[] = {2};
	int d[] = {5, 5, 5, 5};
	int e[] = {5, 5, 5, 2, 5};

	printf("%d\n", isSequentiallyBounded(a, 2));
	printf("%d\n", isSequentiallyBounded(b, 2));
	printf("%d\n", isSequentiallyBounded(c, 1));
	printf("%d\n", isSequentiallyBounded(d, 4));
	printf("%d\n", isSequentiallyBounded(e, 5));
}
