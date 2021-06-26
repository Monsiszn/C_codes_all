#include<stdio.h>

void printArray(int arr[], int n)
{
	for(int i =0; i<n; i++)
		printf("%d ", arr[i]);
}

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

void leftRotate(int arr[], int d, int n)
{
	int i, j, k, temp;
	d = d%n;
	int g_c_d = gcd(d, n);
	
	for(i = 0; i< g_c_d; i++)
	{
		temp = arr[i];
		j = i;
		while(1)
		{
			k = j + d;
			if(k>=n)
				k = k-n;
			if(k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
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
