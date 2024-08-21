// to print the sum and average using arrays
#include<stdio.h>
int main()
{
	int num, a[50],i,sum,avg;
	printf("enter the size of variables:",num);
	scanf("%d",&num);
	printf("enter the %d elements: ",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<num;i++)
	{
		sum=sum+a[i];
		//printf("the sum is %d\n",sum);
	}
	printf("the sum is %d\n",sum);
	avg=sum/num;
	printf("the avg is %d\n",avg);
	return 0;
}
