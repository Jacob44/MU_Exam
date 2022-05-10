#include <stdio.h>

int computeDepth(int n)
{
	int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i = 1, j, mult, rem;

	while(1)
	{
		mult = n * i;
		while(mult != 0)
		{
			rem = mult % 10;
			if(rem == 0)
				a[0] = 1;
			if(rem == 1)
				a[1] = 1;
			if(rem == 2)
				a[2] = 1;
			if(rem == 3)
				a[3] = 1;
			if(rem == 4)
				a[4] = 1;
			if(rem == 5)
				a[5] = 1;
			if(rem == 6)
				a[6] = 1;
			if(rem == 7)
				a[7] = 1;
			if(rem == 8)
				a[8] = 1;
			if(rem == 9)
				a[9] = 1;
			mult /= 10;
		}
		for (j = 0; j < 10; j++)
		{
			if (a[j] != 1)
				break;
			if (j == 9)
				return (i);
		}
		i++;
	}
	return (0);
}
int main(void)
{
	printf("%d\n", computeDepth(42));
	printf("%d\n", computeDepth(7));
	printf("%d\n", computeDepth(13));
	printf("%d\n", computeDepth(25));
}
