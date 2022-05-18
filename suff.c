#include <stdio.h>

int isSuff(int a[], int len)
{
	int i, j, nminus = 0, nplus = 0;

	for (i = 0; i < len; i++)
	{
		nminus = 0;
		nplus = 0;
		for (j = 0; j < len; j++)
		{
			if (i != j)
			{
				if(a[j] == a[i] - 1)
					nminus = 1;
				else if(a[j] == a[i] + 1)
					nplus = 1;
				else
					continue;
			}
		}
		if (nminus == 0 && nplus == 0)
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {2, 10, 9,3};
	int b[] = {2, 2, 3, 3, 3};
	int c[] = {1, 1, 1, 2, 1, 1};
	int d[] = {0, -1, 1};
	int e[] = {3, 4, 5, 7};

	 printf("%d\n", isSuff(a, 4));
	 printf("%d\n", isSuff(b, 5));
	 printf("%d\n", isSuff(c, 6));
	 printf("%d\n", isSuff(d, 4));
	 printf("%d\n", isSuff(e, 4));
}
