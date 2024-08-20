//to print the power of number using recursion 
#include<stdio.h>
int power(int x,int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return (x*power(x,n-1));
	}
}
int main()
{
	int m,n,result;
	printf("enter the number:",m);
	scanf("%d",&m);
	printf("enter the power number: ",n);
	scanf("%d",&n);
	result=power(m,n);
	printf("the number is  %d and its power %d is %d\n",m,n,result);
	return 0;
}
