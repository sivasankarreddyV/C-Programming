// to print the sum of two numbers using functions
// with argument and without return type
#include <stdio.h>
void sum(int a,int b)
{
	int result=a+b;
	printf("the sum of %d and %d is: %d ",a,b,result);
}
int main()
{
	int num1,num2;
	printf("enter the first number: ",num1);
	scanf("%d",&num1);
        printf("enter the second number: ",num2);
	scanf("%d",&num2);
	sum(num1,num2);
	return 0;
}
