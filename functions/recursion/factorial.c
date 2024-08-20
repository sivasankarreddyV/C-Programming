// to print the factorial of a given number
#include <stdio.h>
int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}
int main()
{
	int x,r;
	printf("enter the number: ",x);
	scanf("%d",&x);
	r=fact(x);
	printf("the factorial of %d is: %d",x,r);
	return 0;
}

