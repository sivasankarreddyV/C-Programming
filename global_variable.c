#include <stdio.h>
int x=10;
void fun()
{
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}
int main()
{
	printf("%d\n",x);
	x++;
	fun();
	x++;
	printf("%d\n",x);
	fun();
	printf("%d\n",x);
}
