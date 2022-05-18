#include <stdio.h>
#include <stdbool.h>

bool sumIsPower(int arr[], int len)
{
	int i = 0;
	int sum = 0, rem;

	for (; i < len; i++)
	{
		sum += arr[i];
	}
	if (sum == 1)
		return (true);
	while(sum > 1)
	{
		rem = sum % 2;
		sum /= 2;
	}
	if (rem == 0 && sum == 1)
		return (true);
	return (false);
}
int main(void)
{
	int a[] = {8, 8, 8, 8, 8, 8};
	int b[] = {8, 9, 8};

	printf("%d\n", sumIsPower(a, 6));
	printf("%d\n", sumIsPower(b, 3));
}
