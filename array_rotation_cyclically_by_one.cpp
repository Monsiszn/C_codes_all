#include<stdio.h>

void printArray(int arr[], int n)
{
	for(int i =0; i<n; i++)
		printf("%d ", arr[i]);
}

void rotate(int arr[], int n)
{
	int temp = arr[n-1];
	for(int i = n-1; i>0; i--)
		arr[i] = arr[i-1];
	
	arr[0] = temp; 
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
