#include <stdio.h>

int repsEqual(int a[], int len, int n)
{
	int i;
	int rem = 0;

	for (i = (len - 1); i >= 0; i--)
	{
		rem = n%10;
		if (rem != a[i])
			return (0);
		n /= 10;
	}
	return (1);
}
int main (void)
{
	int a1[] = {3, 2, 0, 5};
	int n1 = 32053;
	int k;

	k = repsEqual(a1, 5, n1);

	printf("%d\n", k);
}
