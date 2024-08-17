//to print the area of the rectangle using input function
#include<stdio.h>
int main()
{
	int length,breadth,result;
	printf("enter the length of a rectangle: ");
	scanf("%d",&length);
	printf("enter the breadth of a rectangle: ");
	scanf("%d",&breadth);
	result=(length*breadth);
	printf("area of rectangle is: %d", result);
}

