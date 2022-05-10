#include <stdio.h>

int arrayHasNoZeroes(int a[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (a[i] == 0)
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {1, 2, 3};
	int b[] = {1, 0, 4, 0};
	int c[] = {1, 2, 3, 0};
	int d[] = {0, 0, 0, 0};
	int e[] = {};

	printf("%d\n", arrayHasNoZeroes(a, 3));
	printf("%d\n", arrayHasNoZeroes(b, 4));
	printf("%d\n", arrayHasNoZeroes(c, 4));
	printf("%d\n", arrayHasNoZeroes(d, 4));
	printf("%d\n", arrayHasNoZeroes(e, 0));

}
