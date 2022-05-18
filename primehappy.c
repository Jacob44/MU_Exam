#include <stdio.h>

int isSystematicallyIncreasing(int a[], int len)
{
	int i, k = 2; 

	if (len < 2 && a[0] != 1)
		return (0);
	if (a[0] != 1 || a[1] != 1)
		return (0);
	for (i = 1; i < len; i++)
	{
		for (j = 1; j < k; j++)
		{
			if (a[i] != j)
				return (0);
		}
	}

}
