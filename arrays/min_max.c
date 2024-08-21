// to print the minimum and maximum of arrays
#include <stdio.h>
int main()
{
	int a[10],i,n,min,max;
	printf("\nenter n value: ");
	scanf("%d",&n);
	printf("\nenter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min > a[i])
		{
			min=a[i];
		}
	}
	printf("minimum elements is %d\n",min);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("the maximum element is %d\n",max);
return 0;
}

