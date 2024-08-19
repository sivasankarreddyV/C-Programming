// to print the sum of two numbers using functions
// without argument and without return values
#include <stdio.h>
void sum()
{
	int a,b,sum;
	printf("enter the first number: ",a);
	scanf("%d",&a);
	printf("enter the second number: ",b);
	scanf("%d",&b);
	sum=a+b;
	printf("the sum of %d and %d is: %d",a,b,sum);
}
int main()
{
	sum();
	return 0;
}
