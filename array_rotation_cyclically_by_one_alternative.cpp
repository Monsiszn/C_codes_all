#include<stdio.h>

void printArray(int arr[], int n)
{
	for(int i =0; i<n; i++)
		printf("%d ", arr[i]);
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void rotate(int arr[], int n)
{
	int i = 0, j = n-1;
	while(i != j)
	{
		swap(&arr[i], &arr[j]);
		i++;
	}
}
int main()
{
	int i, n, arr[30];
	printf("\nEnter the number of values you want to enter: ");
	scanf("%d", &n);
	
	printf("\nEnter the value of array:\n");
	for(i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nValues stored in the array as:\n");
	printArray(arr, n);
	
	rotate(arr, n);
	
	printf("\nValues stored in the array post rotation as:\n");
	printArray(arr, n);
	
	return 0;
	
}
