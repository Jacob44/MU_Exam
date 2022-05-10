#include <stdio.h>
#include "main.h"

int isLegalNumber(int a[], int len, int base)
{
	        int i;

		        if (len < 1 || base < 2)
				                return (0);

			        for (i = 0; i < len; i++)
					        {
							    if (a[i] >= base)
										                        return (0);
									        }
				        return (1);
}

int convertToBase10(int a[], int len, int base)
{
	int i, j = 0, sum = 0, basej, exp;

	if(!(isLegalNumber(a, len, base)))
	{
		return (-1);
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (j == 0)
			basej = 1;
		else
		{
			basej = 1;
			exp = j;
			while (exp != 0)
			{
				basej *= base;
				exp--;
			}
		}
		sum = sum + (basej * a[i]);
		/*printf("i: %d j: %d a[%d] = %d and basej = %d ", i, j, i, a[i], base ^ j);*/
		j++;	
	}
	return (sum);
}
int main(void)
{
	int a[] = {1, 0, 1, 1};
	int b[] = {1, 1, 2};
	int c[] = {3, 2, 5};
	int d[] ={3, 7, 1};

	printf("%d\n", convertToBase10(a, 4, 2));
	 printf("%d\n", convertToBase10(b, 3, 3));
	  printf("%d\n", convertToBase10(c, 3, 8));
	   printf("%d\n", convertToBase10(d, 3, 6));
}
