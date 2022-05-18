#include <stdio.h>

int isbean(int a[], int len)
{
	int nflag = 0, sflag = 0, sixteenflag = 0, thirflag = 0;
	int i;

	for (i = 0; i < len; i++)
	{
		if (a[i] == 9)
			nflag = 1;
		else if (a[i] == 13)
			thirflag = 1;
		else if (a[i] == 16)
			sixteenflag = 1;
		else if (a[i] == 7)
			sflag = 1;
		else
			continue;
	}
	if ((nflag == 1 && thirflag == 0) || (sflag == 1 && sixteenflag == 1))
		return (0);
	return (1);
}
int main(void)
{
	int a[] = {1, 2, 3, 9, 6, 13};
	int b[] = {3, 4, 6, 7, 13, 15};
	int c[] = {1, 2, 3, 4, 10, 11, 12};
	int d[] = {3, 6, 9, 5, 7, 13, 6, 17};
	int e[] = {9, 6, 18};
	int f[] = {4, 7, 16};

	printf("%d\n", isbean(a, 6));
	 printf("%d\n", isbean(b, 6));
	  printf("%d\n", isbean(c, 7));
	   printf("%d\n", isbean(d, 8));
	    printf("%d\n", isbean(e, 3));
	     printf("%d\n", isbean(f, 3));
}
