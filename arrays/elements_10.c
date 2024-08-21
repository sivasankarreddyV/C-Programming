//to print the store the elements in the array
#include <stdio.h>
int main()
{
	int i;
	int arr[10];
	printf("enter the 10 elements: \n");
	for(i=0;i<10;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("the elements in the array are: ");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
