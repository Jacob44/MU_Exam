#include <stdio.h>

int isFibonacci (int n)
{
	int sum = 0, num1 = 1, num2 = 1;
	
	if (n == 1)
		return (1);
	while (sum < n)
	{	
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	if (sum == n)
		return (1);
	return (0);
}
int main(void)
{
	printf("%d\n", isFibonacci(3));
	printf("%d\n", isFibonacci(4));
	printf("%d\n", isFibonacci(9));
	printf("%d\n", isFibonacci(8));
	printf("%d\n", isFibonacci(13));
	printf("%d\n", isFibonacci(12));
}
