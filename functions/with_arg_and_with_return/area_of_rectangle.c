// to print the area of rectangle using functions
// with arguments and with return values
#include <stdio.h>
int calc_Area(int l,int b)
{
	int area;
	area=l+b;
	return area;
}
int main()
{
	int length,width,result;
	printf("enter the length of a rectangle: ",length);
	scanf("%d",&length);
	printf("enter the width of a rectangle: ",width);
	scanf("%d",&width);
	result=length*width;
	printf("the area of a rectangle is: %d",result);
        return 0;
}
