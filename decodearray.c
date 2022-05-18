#include <stdio.h>

int decodeArray(int a[], int len)
{
	int i, j, sum = 0, count = 0, num = 0, mult = 1;

	if (len == 1 && a[0] == 1)
		return (0);
	for (i = len - 1; i > 0; i--)
	{
		count = 0;
		if (a[i] == 1)
		 	{
				j = i - 1;
				while(a[j] == 0)
				{
					count++;
					if (j == 0)
						break;
					j--;
				}
				sum += count * mult;
				mult *= 10;	
			}
			
	}
	if (a[0] == -1)
		sum *= -1;
	return (sum);
}
int main(void)
{
	int a[] = {1};
	int b[] = {0, 1};
	int c[] = {-1, 0, 1};
	int d[] = {0, 1, 1, 1, 1, 1, 0, 1};
	int e[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 1};

	printf("%d\n", decodeArray(a, 1));
	printf("%d\n", decodeArray(b, 2));
	printf("%d\n", decodeArray(c, 3));
	printf("%d\n", decodeArray(d, 8));
	printf("%d\n", decodeArray(e, 30));
}
