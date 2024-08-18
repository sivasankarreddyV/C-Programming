//to print the multiplication table
//using for loop
#include <stdio.h>
int main()
{
	int num = 5;
	int i;
	printf("the multiplication table of %d is:\n",num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d =%d\n",num,i,num*i);
	}
	return 0;
}
