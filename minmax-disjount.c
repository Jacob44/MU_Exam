#include <stdio.h>

int isMinMaxDisjoint(int a[], int len)
{
	int i, min, max, minindex = 0, maxindex = 0, mincount = 0, maxcount = 0;

	if (len < 2)
		return (0);
	min = a[0];
	max = a[0];

	for (i = 0; i < len; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxindex = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			minindex = i;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (min == a[i])
			mincount++;
		if (max == a[i])
			maxcount++;
	}
	if (min == max || ((minindex - maxindex < 2) && (minindex - maxindex > -2))
			|| mincount != 1 || maxcount != 1)
		return (0);
	return (1);
}

int main (void)
{
	int a[] = {18, -1, 3, 4, 0};
	int b[] = {9, 0, 5, 9};
	int c[] = {0, 5, 18, 0, 9};
	int d[] = {7, 7, 7, 7};
	int e[] = {};
	int f[] = {1, 2};
	int g[] = {1};
	int h[] = {5, 4, 1, 3, 2};

	printf("%d\n", isMinMaxDisjoint(a, 5));
	printf("%d\n", isMinMaxDisjoint(b, 4));
	printf("%d\n", isMinMaxDisjoint(c, 5));
	printf("%d\n", isMinMaxDisjoint(d, 4));
	printf("%d\n", isMinMaxDisjoint(e, 0));
	printf("%d\n", isMinMaxDisjoint(f, 2));
	printf("%d\n", isMinMaxDisjoint(g, 1));
	printf("%d\n", isMinMaxDisjoint(h, 5));
}
