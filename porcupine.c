#include <stdio.h>

int isPrime(int n)
{
	int i = 2, flag = 0;

	for (; i < n; i++)
	{
		if ((n % (i)) == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		return (0);
	return (1);
}
int findPorcupineNumber(int n)
{
	int tmp = 1;
	
	n++;
	while(n > 0)
	{
		/*printf("%d: %d\n", n, isPrime(n));*/
		if(isPrime(n))
		{
			if((n % 10 == 9) && (tmp % 10 == 9))
				return (tmp);
			/*printf("%d\n", tmp);*/
			tmp = n;
		}
	n++;
	}
	return (0);
}
int main(void)
{
	int n = 138;

	printf("%d\n", findPorcupineNumber(n));
	printf("%d\n", findPorcupineNumber(139));
}
