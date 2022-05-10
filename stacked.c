#include <stdio.h>

int isStacked(int n)
{
	int i, sum = 0;

	if (n < 1)
		return (0);
	for (i = 1; i <= n; i++)
	{
		sum += i;
		if (sum == n)
			return (1);
		if (sum > n)
			return (0);
	}
	return (0);
}
int main(void)
{
	printf("%d\n", isStacked(7));
	printf("%d\n", isStacked(10));
	printf("%d\n", isStacked(-4));
	printf("%d\n", isStacked(1));

}
