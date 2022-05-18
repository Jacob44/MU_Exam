#include <stdio.h>

int checkConcatenatedSum(int n, int catlen)
{
	int mod, sum, res = 0, i, tmp = n;

	while(n > 0)
	{
		mod = n % 10;
		sum = mod;

		for (i = 2; i <= catlen; i++)
		{
			mod *= 10;
			sum += (mod);	
		}
		n /= 10;
		printf("%d\n", sum);
		res += sum;
	}
	printf("%d and n is %d\n", res, tmp);
	if (res == tmp)
		return (1);
	return (0);
}
int main(void)
{
	int a[] = {198, 198, 2997, 2997, 13332, 9};
	int b[] = {2, 3, 3, 2, 4, 1};
	int i = 0;

	printf("%d\n", checkConcatenatedSum(198, 2));

	for (; i < 6; i++)
	{
		printf("%d\n", checkConcatenatedSum(a[i], b[i]));
	}
}
