#include <stdio.h>

int isOddheavy(int a[], int len)
{
	int i, j, flag = 0;


	for (i = 0; i < len; i++)
	{
		if (a[i] % 2 != 0)
		{
			flag = 1;
			for (j = 0; j < len; j++)
			{
				if (a[j] % 2 == 0 && a[j] > a[i])
					return (0);
			}
		}
	}
	if (!flag)
		return (0);
	return (1);
}
int main(void)
{
	int a[] = {1};
	int b[] = {2};
	int c[] = {1, 1, 1, 1, 1, 1};
	int d[] = {2, 4, 6, 8, 11};
	int e[] = {-2, -4, -6, -8, -11};
	
	printf("%d\n", isOddheavy(a, 1));
	printf("%d\n", isOddheavy(b, 1));
	printf("%d\n", isOddheavy(c, 6));
	printf("%d\n", isOddheavy(d, 5));
	printf("%d\n", isOddheavy(e, 5));
}
