#include <stdio.h>

int isHollow(int a[], int len)
{
	int count = 0, ncount = 0, i, prev, next;

	if (a[0] = 0 && len != 1)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (a[i] == 0)
		{
			count++;
			if (a[i - 1] != 0)
			{
				prev = ncount;
				ncount = 0;
			}
		}
		else
		{
			ncount++;
			/*
			if (a[i + 1] == 0)
				prev = ncount;*/
		}
	}
	next = ncount;
	printf("prev: %d next: %d count: %d\n", prev, next, count);
	if(count >= 3 && prev == next)
		return (1);
	return (0);
}
int main (void)
{
	int a[] = {1, 2, 4, 0, 0, 0, 3, 4, 5};
	int b[] = {1,2,0,0,0,3,4,5};
	int c[] = {1,2,4,9, 0,0,0,3,4, 5};

	printf("%d\n", isHollow(a, 9));
	printf("%d\n", isHollow(b, 9));
	printf("%d\n", isHollow(c, 10));
}
