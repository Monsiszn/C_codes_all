#include<stdio.h>

void leftRotateByOne(int arr[], int n)
{
	int temp = arr[0], i;
	for(i=0; i< n-1; i++)
		arr[i] = arr[i+1];
	arr[n-1] = temp;
}
void leftRotate(int arr[], int d, int n)
{
	for(int i = 0; i<d; i++)
		leftRotateByOne(arr, n);
}

void printArray(int arr[], int n)
{
	for(int i = 0; i<n; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[30], n, i, d;
	printf("\nEnter how many values you want to put in the input array: ");
	scanf("%d", &n);
	printf("\nEnter the values of input array: \n");
	for(i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nValues stored in the input array as:\n ");
	printArray(arr, n);
	printf("\nHow many digits you want to rotate?: ");
	scanf("%d", &d);
	
	leftRotate(arr, d, n);
	
	printf("\nValues stored in the input array post rotation:\n ");
	printArray(arr, n);
	
	return 0;

	
}
