#include <stdio.h>

int isNormal(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0 && i % 2 != 0)
			return (0);
	}
	return (1);
}
int main(void)
{
	printf("%d\n", isNormal(6));
	printf("%d\n", isNormal(2));
	printf("%d\n", isNormal(5));
}
