#include <stdio.h>

int isRailroadTie(int a[], int len)
{
	int i, flag = 0, count;

	if (len < 2 || a[0] == 0 || (len == 2 && a[1] == 0) || a[len - 1] == 0 || a[len - 2] == 0)
		return (0);
	if (len == 2 && a[1] != 0)
		return (1);
	for (i = 1; i < len - 1; i++)
	{
		if (a[i] != 0)
		{
			flag = 1;
			if ((a[i - 1] == 0 && a[i + 1] == 0) || (a[i - 1] != 0 && a[i + 1] != 0))
					return (0);
		}
		else
		{
			if (a[i - 1] == 0 || a[i + 1] == 0)
				return (0);
		}
	}
	if (!flag)
		return (0);
	return (1);

}
int main (void)
{
	int a[] = {1, 2};
	int b[] = {1, 2, 0, 1, 2, 0, 1, 2};
	int c[] = {3, 3, 0, 3, 3, 0, 3, 3, 0, 3, 3};
	int d[] = {0, 0, 0, 0};
	int e[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int f[] = {1, 3, 0, 3, 5, 0};

	printf("%d\n", isRailroadTie(a, 2));
	printf("%d\n", isRailroadTie(b, 8));
	printf("%d\n", isRailroadTie(c, 11));
	printf("%d\n", isRailroadTie(d, 4));
	printf("%d\n", isRailroadTie(e, 10));
	printf("%d\n", isRailroadTie(f, 6));	
}
