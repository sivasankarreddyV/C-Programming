//to print the pattern by using input function
#include <stdio.h>
int main()
{
	int i,j;
	i=1;
	j=0;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
