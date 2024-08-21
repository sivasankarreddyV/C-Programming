// to print the sum and average of n natural numbers using arrays
#include<stdio.h>
int main()
{
	int n, a[50],i,sum,avg;
	printf("enter the size of variables:",n);
	scanf("%d",&n);
	printf("enter the %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum is %d\n",sum);
	avg=sum/n;
	printf("the avg is %d\n",avg);
	return 0;
}
