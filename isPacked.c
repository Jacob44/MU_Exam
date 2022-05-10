#include <stdio.h>

int isPacked(int a[], int len)
{
	int i, j, prev, flag = 0, count = 0;

	if (len == 0)
		return (1);

	for (i = 0; i < len - 1; i++)
	{
		if (a[i] <= 0)
			return (0);
		prev = i;
		if (i == 0 || a[i] != a[i - 1])
		{
			count = 1;
			for (j = i + 1; j < len; j++)
			{
				if (a[i] == a[j])
				{
					if ((j - prev) != 1)
						return (0);
					count++;
					prev = j;
				}
			}
		}
		if (count != a[i])
			return (0);
	}
	if((a[len - 1] != a[len - 2]) && a[len - 1] != 1)
		return (0);
	return (1);
}
int main(void)
{
	int a[] = {2, 2, 1};
	int b[] = {2, 2, 1, 2, 2};
	int c[] = {4, 4, 4, 4, 1, 2, 2, 3, 3, 3};
	int d[] = {7, 7, 7, 7, 7, 7, 7, 1};
	int e[] = {7, 7, 7, 7, 1, 7, 7, 7};
	int f[] = {7, 7, 7, 7, 7, 7, 7};
	int g[] = {};
	int h[] = {1, 2, 1};
	int i[] = {2, 1, 1};
	int j[] = {-3, -3, -3};
	int k[] = {0, 2, 2};
	int l[] = {2, 1, 2};
	
	printf("%d\n", isPacked(a, 3));
	 printf("%d\n", isPacked(b, 5));
	 printf("%d\n", isPacked(c, 10));
	 printf("%d\n", isPacked(d, 8));
	 printf("%d\n", isPacked(e, 8));
	 printf("%d\n", isPacked(f, 7));
	 printf("%d\n", isPacked(g, 0));
	 printf("%d\n", isPacked(h, 3));
	 printf("%d\n", isPacked(i, 3));
	 printf("%d\n", isPacked(j, 3));
	 printf("%d\n", isPacked(k, 3));
	 printf("%d\n", isPacked(l, 3));
}
