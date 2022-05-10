#include <stdio.h>

int isGuthrieSequence(int a[], int len)
{
	int i = 0, tmp = 0;

	if (a[len - 1] != 1)
		return (0);
	for (; i < (len - 1); i++)
	{
		if (a[i] > 0)
		{
			if (a[i] % 2 == 0)
			{
				tmp = a[i] / 2;
				if (tmp != a[i + 1])
					return (0);
			}
			else
			{
				tmp = a[i] * 3 + 1;
				if (tmp != a[i + 1])
					return (0);
			}
		}
		else
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {8, 4, 2, 1};
	int b[] = {8, 17, 4, 1};
	int c[] = {8, 4, 1};
	int d[] = {8, 4, 2};

	printf("%d\n", isGuthrieSequence(a, 4));
	printf("%d\n", isGuthrieSequence(b, 4));
	printf("%d\n", isGuthrieSequence(c, 3));
	printf("%d\n", isGuthrieSequence(d, 3));
}
