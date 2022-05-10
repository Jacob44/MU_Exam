#include <stdio.h>

int fullnessQuotient(int n)
{
	int i, mult, flag = 0;

	if(n < 1)
		return (-1);

	for (i = 2; i <= 9; i++)
	{
		mult = n;
		while(mult != 0)
		{
			if(mult % i == 0)
			{
				flag++;
				break;
			}
			mult /= i;
		}
	}
	return (8 - flag);
}
int main(void)
{
	printf("%d\n", fullnessQuotient(1));
	printf("%d\n", fullnessQuotient(9));
	printf("%d\n", fullnessQuotient(360));
	printf("%d\n", fullnessQuotient(-4));
	printf("%d\n", fullnessQuotient(94));
}
