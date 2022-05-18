#include <stdio.h>

int isMeera(int n)
{
	int i, count = 0;

	if (n <= 2)
		return (0);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count != 0 && n % count == 0)
		return (1);
	return (0);
}
int main (void)
{
	printf("%d\n", isMeera(6));
	printf("%d\n", isMeera(30));
	printf("%d\n", isMeera(15));
}
