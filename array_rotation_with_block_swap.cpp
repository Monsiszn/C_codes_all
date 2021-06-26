#include<stdio.h>

void printArray(int arr[], int n)
{
	for(int i =0; i<n; i++)
		printf("%d ", arr[i]);
}

void swap(int arr[], int fi, int si, int d)
{
	int temp;
	for(int i = 0; i<d; i++)
	{
		temp = arr[fi +i];
		arr[fi + i] = arr[si + i];
		arr[si + i] = temp;
	}
}

void leftRotate(int arr[], int d, int n)
{
	if(d == 0 || d == n)
		return;
		
	if(n-d == d)
	{
		swap(arr, 0, n-d, d);
		return;
	}
	
	if(d < n-d)
	{
		swap(arr, 0, n-d, d);
		leftRotate(arr, d, n-d);
	}
	else
	{
		swap(arr, 0, d, n-d);
		leftRotate(arr+n-d, 2*d-n, d);
	}
}

int main()
{
	int i, n, d, arr[30];
	printf("\nEnter the number of values you want to enter: ");
	scanf("%d", &n);
	
	printf("\nEnter the value of array:\n");
	for(i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nValues stored in the array as:\n");
	printArray(arr, n);
	
	printf("\nHow many data you want to rotate: ");
	scanf("%d", &d);
	
	leftRotate(arr, d, n);
	
	printf("\nValues stored in the array post rotation as:\n");
	printArray(arr, n);
	
	return 0;
	
}
