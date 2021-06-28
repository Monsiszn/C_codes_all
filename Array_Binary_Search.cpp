#include<stdio.h>

int binarySearch(int arr[], int left, int right, int x)
{
	if(right >= left)
	{
		int mid = left + (right - left)/2;
		if(arr[mid] == x)
			return mid;
		if(arr[mid] > x)
			return binarySearch(arr, left, mid-1, x);
		
		return binarySearch(arr, mid+1, right, x);
	}
	return -1;
}
int main()
{
	int arr[30], n, x;
	printf("\nEnter the number of values in array: ");
	scanf("%d", &n);
	
	printf("\nEnter the values of array:\n");
	for(int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("\nEnter which data you want to find:");
	scanf("%d", &x);
	
	int out = binarySearch(arr, 0, n-1, x);
	(out == -1)
	? printf("\nthe data is not in the array")
	: printf("\nThe data is in the array in the following index: %d", out);
	
	return 0;
}
