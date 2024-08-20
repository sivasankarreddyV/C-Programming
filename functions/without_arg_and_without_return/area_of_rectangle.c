// to print the area of a rectangle using functions
// without arguments and without return values
#include <stdio.h>
void area()
{
	int length,width,area;
	printf("the length of rectangle is: ",length);
	scanf("%d",&length);
	printf("the width of rectangle is: ",width);
        scanf("%d",&width);
	area = length * width;
	printf("the area of rectangle is: %d",area);
}
int main()
{
	area();
	return 0;
}

