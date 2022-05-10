#include <stdio.h>

int smallest(int n)
{
	int i = 1, count = 0, smallest = 1, mult; 

	while (n != 0)
	{
		for (i = 1; i <= n; i++)
		{
			mult = smallest * i;
			while ( mult != 0)
			{
				if (mult % 10 == 2)
				{
					count++;
					break;
				}										                        mult /= 10;				                
			}	
		}
		if (count == n)
			return (smallest);
		smallest++;
		count = 0;
	}
	return (smallest);
}
int main(void)
{
	printf("%d\n", smallest(4));
	printf("%d\n", smallest(5));
	printf("%d\n", smallest(6));
	printf("%d\n", smallest(7));
}
