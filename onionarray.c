#include <stdio.h>

int isOnionArray(int a[], int len)
{
	int j, k;

	for (j = 0; j < len; j++)
	{
		k = (len - 1) - j;
		if (j != k)
			if (a[j] + a[k] > 10)
				return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {1, 2, 19, 4, 5};
	int b[] = {1, 2, 3, 4, 15};
	int c[] = {1, 3, 9, 8};
	int d[] = {2};
	int e[] = {};
	int f[] = {-2, 5, 0, 5, 12};

	printf("%d\n", isOnionArray(a, 5));
	printf("%d\n", isOnionArray(b, 5));
	printf("%d\n", isOnionArray(c, 4));
	printf("%d\n", isOnionArray(d, 1));
	printf("%d\n", isOnionArray(e, 0));
	printf("%d\n", isOnionArray(f, 5));

}
