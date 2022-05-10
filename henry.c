#include <stdio.h>

int henry(int i, int j)
{
	int count = 0, num1 = 0, num2 = 0;
	int k = 1, m, sum = 0;

	while(i > 0 && j > 0)
	{
		sum = 0;

		for(m = 1; m < k; m++)
		{
			if(k % m == 0)
				sum += m;
		}
		/*printf("k: %d and sum: %d\n", k, sum);*/
		if (sum == k)
		{
			count++;
			if (count == i)
			{
				num1 = k;
				/*printf("%dth: %d", i, num1);*/
			}
			if (count == j)
			{
				num2 = k;
				/*printf("jth: %d", num2);*/
			}
		}
		if(num1 != 0 && num2 != 0)
			break;
		k++;
	}
	return (num1 + num2);
}
int main (void)
{
	int f = henry(3, 1);
	printf("%d\n", f);
}
