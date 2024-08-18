// to print the sum of numbers from 1 to 10
// using do while loop
#include <stdio.h>
int main()
{
	int sum=0;
	int i=1;
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=10);
	printf("the sum of 1 to 10 is:%d",sum);
	return 0;
}
