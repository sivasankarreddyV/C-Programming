// to print the linear search using arrays
#include <stdio.h>
int main()
{
	int a[]={1,12,23,34,45,56,67,78,89,90};
	int i,n,found;
	printf("enter the number: ",n);
	scanf("%d",&n);
	found=0;
	for(i=0;i<10;i++)
	{
		if (a[i]==n)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("%d is found",n);
	}
	else
	{
		printf("%d is not found",n);
		return 0;
	}

}
