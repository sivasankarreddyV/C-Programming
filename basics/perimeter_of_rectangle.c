//to print the perimeter of rectagle using input function
#include <stdio.h>
int main()
{
	int length,breadth,perimeter;
	printf("enter the length of a rectangle: ",length);
	scanf("%d",&length);
	printf("enter the breadth of a rectangle: ",breadth);
	scanf("%d",&breadth);
	perimeter=(length+breadth)*2;
	printf("the perimeter of rectanle is:%d", perimeter);
        return 0;
}
