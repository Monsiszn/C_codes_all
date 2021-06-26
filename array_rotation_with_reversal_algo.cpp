#include<stdio.h>

void printArray(int arr[], int n)
{
	for(int i  =0 ; i<n; i++)
		printf("%d ", arr[i]);
}

void reverseArray(int arr[], int i, int j)
{
	int temp;
	while(i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

void leftRotate(int arr[], int d, int n)
{
	if(d == 0)
		return;
	
	d = d % n;
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, n-1);
	reverseArray(arr, 0, n-1);
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
