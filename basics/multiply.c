//to print the multiplication of two numbers using input function
#include <stdio.h>
int main()
{
	int a,b,r;
	printf("enter the first number: ");
        scanf("%d",&a);
	printf("enter the second number: ");
        scanf("%d",&b);
	r=a*b;
	printf("the multiplication of %d and %d is %d",a,b,r);
	return 0;
}
