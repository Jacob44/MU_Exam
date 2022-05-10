#include <stdio.h>

int isTrivalent(int a[], int len)
{
	int count = 1, i, num1, num2, num3;

	if (len < 3)
		return (0);
	num1 = a[0];
	for (i = 1; i < len; i++)
	{
		if(a[i] != num1)
		{
			num2 = a[i];
			count++;
			break;
		}
	}
	for (i = 1; i < len; i++)
	{
		if (a[i] != num1 && a[i] != num2)
		{
			num3 = a[i];
			count++;
			break;
		}
	}
	if (count != 3)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (a[i] != num1 && a[i] != num2 && a[i] != num3)
			return (0);
	}
	return (1);
}
int main(void)
{
	int a[] = {-1, 0, 1, 0, 0, 0, 45};
	int b[] = {};
	int c[] = {2147483647, -1, -1, -2147483648};

	printf("%d\n", isTrivalent(a, 7));
	printf("%d\n", isTrivalent(b, 0));
	printf("%d\n", isTrivalent(c, 4));
}
