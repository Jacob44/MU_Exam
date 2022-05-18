#include <stdio.h>

int minDistance(int n)
{
	int i = n, prev = n, min;
	min = n;

	while (i >= 1)
	{
		if (n % i == 0)
		{
			if (i != n)
			{
				if ((prev - i) < min)
					min = prev - i;
				prev = i;
			}
		}
		i--;
	}
	return (min);
}
int main(void)
{
	printf("%d\n", minDistance(13013));
	printf("%d\n", minDistance(8));
}
