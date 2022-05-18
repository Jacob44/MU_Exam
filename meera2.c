#include <stdio.h>

int isMeera(int a[], int len)
{
	int i, j, pflag = 0, count= 0, oflag = 0;

	for (i = 0; i < len; i++)
	{
		if (a[i] == 1)
			oflag = 1;
		else if (a[i] == 2)
			pflag = 1;
		else
		{
			for (j = 2; j < a[i]; j++)
			{
				if (a[i] % j == 0)
					count++;
			}
			if (count == 0)
			       pflag = 1;	
		}
		count = 0;
	}
	if ((pflag == 1 && oflag == 0) || (pflag == 0 && oflag == 1))
		return (0);
	return (1);
}
int main(void)
{
	int a[] = {7, 6, 10, 1};
	int b[] = {6, 10, 1};
	int c[] = {3, 7, 1, 8, 1};

	printf("%d\n", isMeera(a, 3));
	printf("%d\n", isMeera(b, 3));
	printf("%d\n", isMeera(c, 5));
}
