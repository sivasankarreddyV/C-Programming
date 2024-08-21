// to print the read n number of values in an array and display them in reverse order
#include <stdio.h>
int main()
{
	int i,n,a[100];
	printf("enter the size of the array: \n",n);
	scanf("%d",&n);
	printf("input %d elements in the array: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe values stored in the array are : \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]); 
       	}
	printf("\nthe values stored in array in reverse order: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

