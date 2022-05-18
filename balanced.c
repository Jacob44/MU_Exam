#include <stdio.h>

int isBalanced(int a[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if ((i % 2 == 0 && a[i] % 2 != 0) || (i % 2 != 0 && a[i] % 2 == 0))
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {6, 7, 2, 3, 12};
	int b[] = {7, 15, 2, 3};
	int c[] = {16, 6, 2, 3};
	int d[] = {2, 3, 6, 7};

	printf("%d\n", isBalanced(a, 5));
	printf("%d\n", isBalanced(b, 4));
	printf("%d\n", isBalanced(c, 4));
	printf("%d\n", isBalanced(d, 4));

}
