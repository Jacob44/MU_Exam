#include <stdio.h>

int isDivisible(int a[], int len, int divisor)
{
	int i;

	if(divisor == 0)
		return (0);

	for(i = 0; i < len; i++)
	{
		if(a[i] % divisor != 0)
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {3, 3, 6, 36};
	int b[] = {4};
	int c[] = {3, 4, 3, 6, 36};
	int d[] = {6, 12, 24, 36};
	int e[] = {};

	printf("%d\n", isDivisible(a, 4, 3));
	printf("%d\n", isDivisible(b, 1, 2));
	 printf("%d\n", isDivisible(c, 5, 3));
	  printf("%d\n", isDivisible(d, 4, 12));
	   printf("%d\n", isDivisible(e, 0, 3));
}
