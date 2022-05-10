#include <stdio.h>
#include <stdlib.h>

int * clusterCompression(int a[], int len)
{
	int *clust, i, j = 1;

	clust = malloc(sizeof(int) * len);
	clust[0] = a[0];
	for (i = 1; i < len; i++)
	{
		if(a[i] != a[i - 1])
		{
		       clust[j] = a[i];
		       j++;
		}
	}
	return (clust);
}
int main(void)
{
	int i;
	int *p;
	int a[] = {0, 0, 0, 2, 0, 2, 0, 2, 0, 0};
	/*
	int b[] = {18};
	int c[] = {};
	int d[] = {-5, -5, -5, -5, -5};
	int e[] = {1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1};
	int f[] = {8, 8, 6, 6, -2, -2, -2};
	*/
	p = clusterCompression(a, 10);

	for (i = 0; i < 25; i++)
		printf("%d, ", p[i]);
	printf("\n");
	/*
	printf("%d\n", clusterCompression(b, 1));
	printf("%d\n", clusterCompression(c, 0));
	printf("%d\n", clusterCompression(d, 5));
	printf("%d\n", clusterCompression(e, 13));
	printf("%d\n", clusterCompression(f, 7));
	*/
}
