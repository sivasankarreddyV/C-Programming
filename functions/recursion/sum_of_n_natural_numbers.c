//to print the sum of n natural numbers using recursion
#include<stdio.h>
int sum(int num1)
{
       	if (num1==1)
	{
		return 1;
	}
	else 
	{
		return (num1+sum(num1-1));
	}
}
int main()
{
	int num,result;
	printf("enter the number: ",num);
	scanf("%d",&num);
	result=sum(num);
	printf("the sum of %d is %d\n",num,result);
	return 0;
}
