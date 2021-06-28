 #include<stdio.h>

int linearSearch(int arr[], int n, int x)
{
	for(int i = 0; i<n; i++)
	{
		if(arr[i] == x)
			return i;
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
	
	int out = linearSearch(arr, n, x);
	(out == -1)
	? printf("\nthe data is not in the array")
	: printf("\nThe data is in the array in the following index: %d", out);
	
	return 0;
}
