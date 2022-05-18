#include <stdio.h>
#include <stdlib.h>

int * fill(int arr[], int len, int k, int n)
{
	int i = 0, j;
	//int *p =  malloc(sizeof(int) * n);
	//int res[n] = {0}; 

	//p = res;
	if (k <= 0)
	{
		printf("exiting..");
		return (NULL);
	}
	int *p =  malloc(sizeof(int) * n);
	for (j = 0; j < n; j++)
	{
		if (i == k)
			i = 0;
		p[j] = arr[i];
		i++;
	}
	return (p);
}
int main(void)
{
	int a[] = {1, 2, 3, 5, 9, 12,-2,-1};
	int b[] = {4, 2, -3, 12};
	int c[] = {2, 6, 9, 0, -3};
	int *k;
	int i = 0;

	k = fill(c, 5, 0, 4);
	
	printf("{");
	for (i = 0; i < 4; i++)
	{	
		printf("%d, ", *(k + i));
	}
	printf("}\n");
	//printf("%d\n", fill(b, 4, 1, 5));
	//printf("%d\n", fill(c, 5, 0, 4));
}
