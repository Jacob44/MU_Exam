#include <stdio.h>

int isPascal (int n)
{
	int i = 1, sum = 0;

	while (sum < n)
	{
		sum += i;
		i++;
	}
	if (sum == n)
		return (1);
	return (0);
}
int main(void)
{
	printf("%d\n", isPascal(15));
	printf("%d\n", isPascal(7));
}
