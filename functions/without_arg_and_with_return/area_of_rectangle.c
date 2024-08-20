// to print the area of rectangle using functions
// without arguments and with return values
#include <stdio.h>
int area()
{
	int length,width,result;
	printf("enter the length of a rectanle: ",length);
	scanf("%d",&length);
	printf("enter the width of a rectangle: ",width);
	scanf("%d",&width);
	result=length*width;
	return result;
}
int main()
{
	int r;
	r=area();
	printf("the area of a rectangle is: %d\n",r);
	return 0;
}
