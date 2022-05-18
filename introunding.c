#include <stdio.h>

void doIntegerBasedRounding(int a[], int n, int len)
{
	int i = 0, j = 0, mult = 0, little = 0, big = 0;

	/*int a[] = {1, 2, 3, 4, 5};
	int b[] = {-1, -2, -3, -4, -5};
	int c[] = {-18, 1, 2, 3, 4, 5};*/

	if (n <= 0)
	{
		a = a;
	}
	else
	{
	for (; i < len; i++)
	{
		j = 0;
		big = n;
		little = 0;
		mult = 0;
		if (a[i] < 0)
			a[i] = a[i];
		else
		{
		while(1)
		{
			mult = j * n;
			printf("j= %d and mult = %d\n", j, mult);
			if(mult < a[i])
				little = mult;
			else
			{
				big = mult;
				if ((big - a[i]) <= (a[i] - little))
					       a[i] = big;
				else
					a[i] = little;
				break;
			}
			j++;
		}
		}

	}
	}
	printf("{");
	for (j = 0; j < len - 1; j++)
		printf("%d, ", a[j]);
	printf("%d}\n", a[len - 1]);
}
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {-1, -2, -3, -4, -5};
	int c[] = {-18, 1, 2, 3, 4, 5};
	/*
	doIntegerBasedRounding(a, 2, 5);
	doIntegerBasedRounding(a, 3, 5);
	*/
	doIntegerBasedRounding(a, (-3), 5);
	doIntegerBasedRounding(b, 3, 5);
	doIntegerBasedRounding(c, 4, 6);
	doIntegerBasedRounding(a, 5, 5);
	doIntegerBasedRounding(a, 100, 5);

}
