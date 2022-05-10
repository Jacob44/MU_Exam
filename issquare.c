#include <stdio.h>

int isSquare(int n)
{
	int i = 0;

	if (n < 0)
		return (0);
	for (; i <= n; i++)
	{
		if (i * i ==  n)
			return (1);
	}
	return (0);
}
int main (void)
{
	printf("%d\n", isSquare(4));
	printf("%d\n", isSquare(25));
	printf("%d\n", isSquare(-4));
	printf("%d\n", isSquare(8));
	printf("%d\n", isSquare(0));
}
