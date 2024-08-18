//to print the sum of 1 t0 100 numbers
//using for loop
#include <stdio.h>
int main()
{
	int sum=0;
	int i;
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	printf("the sum of 1 to 100 numbers is: %d",sum);
	return 0;
}

