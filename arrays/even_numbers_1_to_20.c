// to print the even numbers from 1 to 20 using arrays
#include <stdio.h>
int main()
{
	int i,a[50];
	int k=0;
	for(i=0;i<=20;i++)
	{
		if(i%2==0)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
