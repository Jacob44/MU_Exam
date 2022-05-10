#include <stdio.h>

int isLegalNumber(int a[], int len, int base)
{
	int i;

	if (len < 1 || base < 2)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (a[i] >= base)
			return (0);
	}
	return (1);
}
int main (void)
{
	int a[] = {3, 7, 1};

	printf("%d\n", isLegalNumber(a, 3, 6));
}
