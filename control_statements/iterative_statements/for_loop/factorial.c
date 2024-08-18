//to print the factorial of a number 
//using for loop
#include <stdio.h>
int main()
{
	int num=5;
	int factorial=1;
	int i;
	for(i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	printf("the factorial of %d is %d\n",num,factorial);
	return 0;
}
