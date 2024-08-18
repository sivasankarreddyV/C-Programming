// to print multiplication table
// using do while
#include <stdio.h>
int main()
{
	int num = 5;
	int i = 1;
	printf("the multiplicationtable of %d is:",num);
	do
	{
		printf("%d * %d = %d\n",num,i,num * i);
		i++;
	}
	while(i<=10);
	return 0;
}

