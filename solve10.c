#include <stdio.h>

int * solve10()
{
	int a[2] = {0, 0};
	int ten_fact = 1, i, x, y;
	int xfact, yfact;
	int *p = a;

	for (i = 10; i > 0; i--)
	{
		ten_fact *= i;
	}
	printf("%d\n", ten_fact);
	for (x = 1; x < 10; x++)
	{
		xfact = 1;
		for (i = 1; i <= x; i++)
			xfact *= i;
		for (y = 1; y < 10; y++)
		{
			yfact = 1;
			for (i = 1; i <= y; i++)
				yfact *= i;
			printf("x: %d y: %d gives %d\n", x, y, xfact + yfact);
			if (xfact + yfact == ten_fact)
			{
				printf("%d %d\n", a[0], a[1]);
				a[0] = x;
				a[1] = y;
				return (p);
			}
		}

	}
	return (p);
}
int main(void)
{	
	int *p = solve10();

	printf("%d\n", p[0]);
	printf("%d\n", p[1]);
}
