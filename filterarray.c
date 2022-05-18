#include <stdio.h>

int *fileterArray(int a[], int len, int n)
{
	int j = len;
	int base2[len];
	int count = 0;
	int tmp = n;

	while (tmp > 0)
	{
		base2[j] = tmp % 2;
		if (base2[j] == 1)
		      count++;
		tmp /= 2;
		j--;
	}
	int res[count];
	for (j = 0; j < len; j++)




}
