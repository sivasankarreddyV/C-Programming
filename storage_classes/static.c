// to print the static storage class
#include <stdio.h>
int staticExample()
{
	int y=5;
	y++;
	printf("the value of(static)is:%d",y);
}
int main()
{
	staticExample();
	printf("\n");
	staticExample();
	return 0;
}
