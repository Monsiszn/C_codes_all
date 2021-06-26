#include<stdio.h>

int main()
{
	int iarr[20], d, n, temp[10];
	int i, j;
	printf("\nEnter how many values you want to put in the input array: ");
	scanf("%d", &n);
	printf("\nEnter the values of input array: \n");
	for(i = 0; i<n; i++)
		scanf("%d", &iarr[i]);
	
	printf("\nValues stored in the input array as:\n ");
	for(i = 0; i<n; i++)
		printf("%d ",iarr[i]);
	printf("\nHow many digits you want to rotate?: ");
	scanf("%d", &d);
	
	for(j = 0; j<d; j++)
		temp[j] = iarr[j];
	for(i = 0, j = d; i<n, j<n; i++, j++)
		iarr[i] = iarr[j];
	for(i = n-d, j = 0; i<n, j<d; i++, j++)
		iarr[i] = temp[j];
		
	printf("\nValues stored in the input array post rotation:\n ");
	for(i = 0; i<n; i++)
		printf("%d ",iarr[i]);
	
}
