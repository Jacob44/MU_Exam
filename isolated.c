#include <stdio.h>

int isIsolated(long n)
{
	long cube, square;
        int rem1, rem2;

	if (n < 1 || n > 2097151)
	{
		return (-1);
	}
	cube = n * n * n;

	while(cube != 0)
	{
		square = n * n;
		rem1 = cube % 10;
		while(square != 0)
		{
			rem2 = square % 10;
			if (rem2 == rem1)
				return (0);
			square /= 10;
		}
		cube /= 10;
	}
	return (1);
}
int main (void)
{
	printf("%d\n", isIsolated(162));
	printf("%d\n", isIsolated(69));
	printf("%d\n", isIsolated(14));
	printf("%d\n", isIsolated(15));
	printf("%d\n", isIsolated(34));
}
